  /* Nguyễn Mạnh Khang - Tìm phần tử nhỏ nhất ver 2.0
  Giải thuật:
  B1: Nhập mảng, tạo biến min
  B2: Gán phần tử 0 bằng min
  B3: xét các phần tử còn lại của group (bắt đầu vòng lặp xét từ phần tử thứ nhất), phần tử nào bé hơn min thì đổi chỗ cho đén khi xét hết mảng
  B4: In ra min 
  B5: Hỏi xem user có muốn nhập nữa không
  */
#include <stdio.h>

int main() {
      char choice;
      do
      {
      int n;
      int a[100];
        printf("Nhap kich thuoc cua mang: ");
        scanf("%d", &n);
        printf("\nNhap cac phan tu cua mang:\n");
         for (int i = 0; i < n; i++)
         {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &a[i]);
         }

        int min = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < min )
            {
                min = a[i];
            }
        }
        printf("\nPhan tu nho nhat cua mang la:%d\n", min);
      
      printf("\nBan co muon tiep tuc(Y/N): ");
      scanf(" %c", &choice);
      } while (choice == 'y' || choice == 'Y');
    return 0; 
    }  
    
