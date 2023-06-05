#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    char choice;
    double delta, nghiem1, nghiem2;

    do
    {
        printf("Nhap he so a: ");
        scanf("%lf", &a);
        printf("Nhap he so b: ");
        scanf("%lf", &b);
        printf("Nhap he so c: ");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;
        if (a == 0){
            nghiem1 = - c / b;
            printf("Phuong trinh co nghiem la: %.5lf\n", nghiem1);
        } else if (delta > 0)
        {
            nghiem1 = (- b + sqrt(delta)) / (2 * a);
            nghiem2 = (- b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co: \nNghiem thu nhat la: %.5lf.\n", nghiem1);
            printf("Nghiem thu hai la: %.5lf.\n", nghiem2);
        } else if (delta == 0)
        {
            nghiem1 = - b / (2 * a);
            printf("Phuong trinh co nghiem kep la: %.5lf.\n", nghiem1);
        } else {
            printf("Phuong trinh vo nghiem.");
        }
        printf("\nBan co muon tiep tuc?(y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}