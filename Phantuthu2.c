  /* Nguyễn Mạnh Khang - Tìm phần tử lớn thứ 2 ver 2.0
  Giải thuật:
  B1: Nhập mảng, tạo biến loop, maxvalue và secondvalue
  B2: Gán phần tử 0 và 1 trong mảng cho biến max và second, nếu 0 > 1 thì cho 0 vào max và 1, vào second, nếu 0 < 1 thì 1 vào max và 0 vào second
  B3: xét các phần tử còn lại của group (bắt đầu vòng lặp xét từ phần tử thứ hai), phần tử nào lớn hơn 0 và 1 thì đổi chỗ cho đến hết khi xét hết mảng
  B4: In ra secondmaxValue là phần tử 1. 
  B5: Hoi xem user co muon nhap nua khong.
  */
#include <stdio.h>

int main() {
      char choice;
      do
      {
      int n;
      int a[100];
      int loop, largest, second;

      printf("Nhap kich thuoc cua mang: ");
      scanf("%d", &n);
         printf("\nNhap cac phan tu cua mang:\n");
         for (int i = 0; i < n; i++)
         {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &a[i]);
      } 
      if(a[0] > a[1]) {
         largest = a[0];
         second  = a[1];
      }else {
         largest = a[1];
         second  = a[0];
      } 
      for(loop = 2; loop < n; loop++) {
         if( largest < a[loop] ) {
            second = largest;
            largest = a[loop];
         }else if( second < a[loop] ) {
            second = a[loop];
         }
      }
      printf("\nPhan tu lon thu hai: %d \n", second);  

      printf("\nBan co muon tiep tuc(Y/N): ");
      scanf(" %c", &choice);
      } while (choice == 'y' || choice == 'Y');

      return 0;
}
