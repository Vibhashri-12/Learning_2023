#include <stdio.h>

// Structure definition for a complex number
struct Complex {
    double real;
    double imaginary;
};

// Function to read a complex number from the user
void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%lf", &(num->real));
    printf("Enter the imaginary part: ");
    scanf("%lf", &(num->imaginary));
}

// Function to write a complex number to the console
void writeComplex(const struct Complex* num) {
    printf("Complex number: %.2lf + %.2lfi\n", num->real, num->imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(const struct Complex* num1, const struct Complex* num2) {
    struct Complex result;
    result.real = num1->real + num2->real;
    result.imaginary = num1->imaginary + num2->imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(const struct Complex* num1, const struct Complex* num2) {
    struct Complex result;
    result.real = num1->real * num2->real - num1->imaginary * num2->imaginary;
    result.imaginary = num1->real * num2->imaginary + num1->imaginary * num2->real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;
    
    printf("Enter the first complex number:\n");
    readComplex(&num1);
    
    printf("\nEnter the second complex number:\n");
    readComplex(&num2);
    
    sum = addComplex(&num1, &num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(&sum);
    
    product = multiplyComplex(&num1, &num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(&product);
    
    return 0;
}
