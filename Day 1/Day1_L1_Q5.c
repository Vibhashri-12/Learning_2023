#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;
    
    if (oper_type == 1) {
        // Set 1st bit
        result = num | (1 << 0);
    } else if (oper_type == 2) {
        // Clear 31st bit
        result = num & ~(1 << 30);
    } else if (oper_type == 3) {
        // Toggle 16th bit
        result = num ^ (1 << 15);
    } else {
        printf("Invalid operation type!\n");
        return -1;
    }

    return result;
}

int main() {
    // Test the function
    int number = 0b10101010101010101010101010101010;
    int operation_type = 1;

    int result = bit_operations(number, operation_type);
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}