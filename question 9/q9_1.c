#include <stdio.h>

int main() {
     //Practical 9: Q 9.1 Reverse an array//
    //AAshok sahu 10316
    int n, i;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nReversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
Enter number of elements: 5
Enter array elements:
1 2 3 4 5

Reversed array:
5 4 3 2 1 %        */