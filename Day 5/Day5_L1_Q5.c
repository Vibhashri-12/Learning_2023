#include <stdio.h>

// Structure definition for a point
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two structures using pointers
void swapStructures(struct Point* ptr1, struct Point* ptr2) {
    int tempX = ptr1->x;
    int tempY = ptr1->y;

    ptr1->x = ptr2->x;
    ptr1->y = ptr2->y;

    ptr2->x = tempX;
    ptr2->y = tempY;
}

int main() {
    struct Point point1, point2;

    printf("Enter the coordinates of Point 1:\n");
    printf("X: ");
    scanf("%d", &(point1.x));
    printf("Y: ");
    scanf("%d", &(point1.y));

    printf("\nEnter the coordinates of Point 2:\n");
    printf("X: ");
    scanf("%d", &(point2.x));
    printf("Y: ");
    scanf("%d", &(point2.y));

    printf("\nBefore swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the structures using pointers
    swapStructures(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
