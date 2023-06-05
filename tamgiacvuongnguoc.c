#include<stdio.h>
int main() {
   char choice;
   do
   {
    int n,i,j;
 
    printf("Nhap so dong n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++)
            printf("  "); 
 
        for(j = i; j < n; j++)
            printf(" *");
            printf("\n");       
        }
        printf("Ban co muon tiep tuc (Y/N): ");
        scanf(" %c", &choice);   
    } while(choice == 'y' || choice == 'Y');
    return 1;
}  