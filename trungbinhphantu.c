  /* Nguyễn Mạnh Khang - Tìm trung bình các phần tử ver 2.0
  Giải thuật:
  B1: Nhập mảng
  B2: Tạo biến sum để tính tổng các phần tử trong mảng 
  B3: Tạo biến average (avg) để tính trung bình các phần tử trong mảng bằng công thức sum / (số phần tử)
  B4: In ra avg 
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int avg = 0;
        avg = sum / n;
        
        printf("\nTrung binh cac phan tu cua mang la:%d\n", avg);
      
      printf("\nBan co muon tiep tuc(Y/N): ");
      scanf(" %c", &choice);
      } while (choice == 'y' || choice == 'Y');
    return 0; 
    }  
    
