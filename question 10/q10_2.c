#include <stdio.h>
//Ashok sahu 10316
//Q.2 Sum of diagnol elements of 2d array
int main() {
    int r, c, i, j;
    int arr[10][10];
    int max, min;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
/*
Enter order of matrix: 3 3
Enter elements:
1 2 3 4 5 6 7 8 9 
Sum of diagonal elements = 15
*/