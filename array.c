//array
#include <stdio.h>

int main() {
    int a[3][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}},
        {{13, 14}, {15, 16}, {17, 18}}
    };

    // Printing the array
    printf("The array a[3][3][2] is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}