#include<stdio.h>

int main(){
    char choice;
    do
    {
        int n, i, j;
        printf("Nhap so dong: ");
        scanf("%d", &n);
        printf("\nVe tam giac so:\n");
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2*i - 1; j++)
                printf("%d", j);
            printf("\n");
        }
        printf("Ban co muon tiep tuc (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 1;
}
