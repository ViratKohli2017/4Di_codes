#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    space = n-1;

    // Upper half of diamond pattern
    for (i = 0; i < n; i++) {
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        space--;
    }

    space = 0;

    // Lower half of diamond pattern
    // for (i = n-1; i >= 0; i--) {
    //     for (j = 0; j <=space; j++) {
    //         printf(" ");
    //     }
    //     for (j = 0; j <= i-1; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    //     space++;
    // }

    return 0;
}
