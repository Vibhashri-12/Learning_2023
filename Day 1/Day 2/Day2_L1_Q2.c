#include <stdio.h>

void swap(void* a, void* b, size_t size) 

{
    char* temp = (char*)malloc(size);

    // Copy the contents of 'a' to 'temp'
    memcpy(temp, a, size);

    // Copy the contents of 'b' to 'a'
    memcpy(a, b, size);

    // Copy the contents of 'temp' to 'b'
    memcpy(b, temp, size);

    free(temp);
}

int main() {
    int int1 = 10, int2 = 20;
    printf("Before swapping: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swapping: int1 = %d, int2 = %d\n", int1, int2);

    float float1 = 3.14, float2 = 2.718;
    printf("Before swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);
    swap(&float1, &float2, sizeof(float));
    printf("After swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);

    char char1 = 'A', char2 = 'B';
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);
    
    return 0;
}
