#include<stdio.h>

int main(){
    int year;
    char choice;
    
    do
    {
        printf("\nNhap vao nam ban muon kiem tra: ");
        scanf("%d", &year);
        if (year > 0)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        {
            printf("\n%d la nam nhuan.", year);
        } else {
            printf("\n%d khong phai la nam nhuan.", year); 
        }
    } else {
        printf("\n%d khong hop le.", year);
    }

        printf("\nBan co muon tiep tuc (y/n)?: ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}