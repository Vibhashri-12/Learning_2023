#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void changeToUpperCase(FILE* inputFile, FILE* outputFile);
void changeToLowerCase(FILE* inputFile, FILE* outputFile);
void changeToSentenceCase(FILE* inputFile, FILE* outputFile);
void copyFile(FILE* inputFile, FILE* outputFile);

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments!\n");
        printf("Usage: ./cp <option> <input_file> <output_file>\n");
        printf("Options:\n");
        printf("-u : Change file content to upper case\n");
        printf("-l : Change file content to lower case\n");
        printf("-s : Change file content to sentence case\n");
        printf("No option: Perform a normal copy\n");
        return 1;
    }

    char* option = argv[1];
    char* inputFile = argv[2];
    char* outputFile = argv[3];

    FILE* input = fopen(inputFile, "r");
    if (input == NULL) {
        printf("Failed to open the input file.\n");
        return 1;
    }

    FILE* output = fopen(outputFile, "w");
    if (output == NULL) {
        printf("Failed to create the output file.\n");
        fclose(input);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        changeToUpperCase(input, output);
    } else if (strcmp(option, "-l") == 0) {
        changeToLowerCase(input, output);
    } else if (strcmp(option, "-s") == 0) {
        changeToSentenceCase(input, output);
    } else {
        copyFile(input, output);
    }

    printf("File copied successfully.\n");

    fclose(input);
    fclose(output);

    return 0;
}

void changeToUpperCase(FILE* inputFile, FILE* outputFile) {
    char c;
    while ((c = fgetc(inputFile)) != EOF) {
        fputc(toupper(c), outputFile);
    }
}

void changeToLowerCase(FILE* inputFile, FILE* outputFile) {
    char c;
    while ((c = fgetc(inputFile)) != EOF) {
        fputc(tolower(c), outputFile);
    }
}

void changeToSentenceCase(FILE* inputFile, FILE* outputFile) {
    char c;
    int isFirstCharacter = 1;

    while ((c = fgetc(inputFile)) != EOF) {
        if (isFirstCharacter) {
            fputc(toupper(c), outputFile);
            isFirstCharacter = 0;
        } else {
            fputc(tolower(c), outputFile);
        }

        if (c == '.' || c == '!' || c == '?') {
            isFirstCharacter = 1;
        }
    }
}

void copyFile(FILE* inputFile, FILE* outputFile) {
    char c;
    while ((c = fgetc(inputFile)) != EOF) {
        fputc(c, outputFile);
    }
}