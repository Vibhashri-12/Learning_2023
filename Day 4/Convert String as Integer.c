#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int num;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    num = atoi(str);
    
    printf("Converted integer: %d\n", num);
    
    return 0;
}

