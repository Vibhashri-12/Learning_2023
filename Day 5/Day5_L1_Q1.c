#include <stdio.h>

// Structure definition for a box
struct Box {
    double length;
    double width;
    double height;
};

// Function to calculate the volume of the box
double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

// Function to calculate the total surface area of the box
double calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    // Declare a box structure variable
    struct Box myBox;
    
    // Declare a pointer to the box structure
    struct Box* boxPtr;
    
    // Assign the address of the box structure variable to the pointer
    boxPtr = &myBox;
    
    // Input the dimensions of the box
    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%lf", &(boxPtr->length));
    printf("Width: ");
    scanf("%lf", &(boxPtr->width));
    printf("Height: ");
    scanf("%lf", &(boxPtr->height));
    
    // Calculate the volume and total surface area using the structure pointer
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    
    // Output the results
    printf("Volume of the box: %.2lf\n", volume);
    printf("Total surface area of the box: %.2lf\n", surfaceArea);
    
    return 0;
}
