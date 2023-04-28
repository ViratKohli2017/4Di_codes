#include <stdio.h>

int main() {
    int i;
    // printf("Enter a number between 0 and 255: ");
    // scanf("%d", &i);
    for(i=0;i<=255;i++){
    printf("The ASCII value of %d is '%c'\n", i, i);
    }

    return 0;
}
