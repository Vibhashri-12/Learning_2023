//Binary/Octal/Hex to Decimal Conversion
#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    
    return decimalNumber;
}

// Function to convert octal to decimal
int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0, remainder;
    
    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
    }
    
    return decimalNumber;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char *hexadecimalNumber) {
    int decimalNumber = 0, i = 0, val, len;
    
    // Calculate the length of the hexadecimal number
    len = strlen(hexadecimalNumber);
    len--;
    
    // Convert hexadecimal to decimal
    for (i = 0; hexadecimalNumber[i] != '\0'; i++) {
        if (hexadecimalNumber[i] >= '0' && hexadecimalNumber[i] <= '9') {
            val = hexadecimalNumber[i] - 48;
        } else if (hexadecimalNumber[i] >= 'a' && hexadecimalNumber[i] <= 'f') {
            val = hexadecimalNumber[i] - 97 + 10;
        } else if (hexadecimalNumber[i] >= 'A' && hexadecimalNumber[i] <= 'F') {
            val = hexadecimalNumber[i] - 65 + 10;
        }
        decimalNumber += val * pow(16, len);
        len--;
    }
    
    return decimalNumber;
}

int main() {
    long long binaryNumber;
    int octalNumber;
    char hexadecimalNumber[100];
    
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));
    
    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);
    printf("Decimal equivalent: %d\n", octalToDecimal(octalNumber));
    
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimalNumber);
    printf("Decimal equivalent: %d\n", hexadecimalToDecimal(hexadecimalNumber));
    
    return 0;
}
