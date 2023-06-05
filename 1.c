#include <stdio.h>

void main() {
    int i, j ,k;
    i = 0;
    printf("Enter number of row: ");
    scanf("%d", &i);
    printf("\n");
    for ( j = 0; j < i; j++)
    {
        printf("\n");
        for (k = i - 1; k >= j; k --)
        {
            printf("*");
        }
    }
}