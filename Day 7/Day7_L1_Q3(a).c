#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

void extractDataFromFile(const char* filename, LogEntry logEntries[], int* numEntries);

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    extractDataFromFile("data.csv", logEntries, &numEntries);

    for (int i = 0; i < numEntries; i++) {
        printf("Entry No: %d\n", logEntries[i].entryNo);
        printf("Sensor No: %s\n", logEntries[i].sensorNo);
        printf("Temperature: %.2f\n", logEntries[i].temperature);
        printf("Humidity: %d\n", logEntries[i].humidity);
        printf("Light: %d\n", logEntries[i].light);
        printf("Time: %s\n", logEntries[i].time);
        printf("------------------------\n");
    }

    return 0;
}

void extractDataFromFile(const char* filename, LogEntry logEntries[], int* numEntries) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];
    int lineCount = 0;

    fgets(line, MAX_LINE_LENGTH, file);

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        lineCount++;


        int entryNo;
        char sensorNo[10];
        float temperature;
        int humidity;
        int light;
        char time[10];

        if (sscanf(line, "%d,%9[^,],%f,%d,%d,%9[^,\n]", &entryNo, sensorNo, &temperature, &humidity, &light, time) == 6) {
   
            logEntries[*numEntries].entryNo = entryNo;
            strncpy(logEntries[*numEntries].sensorNo, sensorNo, sizeof(logEntries[*numEntries].sensorNo) - 1);
            logEntries[*numEntries].sensorNo[sizeof(logEntries[*numEntries].sensorNo) - 1] = '\0';
            logEntries[*numEntries].temperature = temperature;
            logEntries[*numEntries].humidity = humidity;
            logEntries[*numEntries].light = light;
            strncpy(logEntries[*numEntries].time, time, sizeof(logEntries[*numEntries].time) - 1);
            logEntries[*numEntries].time[sizeof(logEntries[*numEntries].time) - 1] = '\0';

            (*numEntries)++; 
        } else {
            printf("Error parsing line %d\n", lineCount);
        }
    }

    fclose(file);
}