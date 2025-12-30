
//Max and min element in 2D array//
#include <stdio.h>

int main() {
    // Ashok sahu 10316//
    int a[10][10];
    int r, c, i, j;
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d", min);

    return 0;
}
/*
Enter number of rows and columns: 2 2
Enter elements of the 2D array:
1 2 3 4 

Maximum element = 4
Minimum element = 1
*/ 
