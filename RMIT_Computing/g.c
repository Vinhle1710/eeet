#include <stdio.h>

int main(){
    int menu;
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Điền số thứ %d : ", i+1);
        scanf("%d", &array[i]);
    }
    do{
        printf("Chọn:\n1. Để in ra phần tử lớn nhất và nhỏ nhất\n2. Để tính và in ra tổng, trung bình cộng của các phần tử.\n3.Để tính tổng của các phần tử chia hết cho 3 trong mảng.\n4. Để xem mảng có bao nhiêu phần tử chẵn.\n5. Để hiển thị nội dung mảng.\n6. Kết thúc.\n");
        scanf("%d", &menu);
        switch (menu){
            case 1:
                int max = array[0];
                for (int i = 0; i < 10; i++)
                {
                    if (max < array[i])
                    {
                        max = array[i];
                    }
                }
                printf("Giá trị lớn nhất là: %d\n", max);
                int min = array[0];
                
                for (int i = 0; i < 10; i++)
                {
                    if (min > array[i])
                    {
                        min = array[i];
                    }
                }
                printf("Giá trị nhỏ nhất là: %d\n", min);
                printf("\n\n");
                break;

            case 2:
                int total = 0;
                for (int i = 0; i < 10; i++)
                {
                    total = total + array[i];
                }
                printf("Giá trị tổng và trung bình của các phần tử lần lượt là: %d, %d\n", total, total/10);
                printf("\n\n");
                break;

            case 3:
                int total2 = 0;
                for (int i = 0; i < 10; i++)
                {
                    if (array[i]%3 == 0)
                    {
                        total2 = total2 + array[i];
                    }
                }
                printf("Tổng của các phần tử chia hết cho 3 là: %d\n", total2);
                printf("\n\n");
                break;

            case 4:
                int counter = 0;
                for (int i = 0; i < 10; i++)
                {
                    if(array[i]%2 == 0){
                        counter++;
                    }
                }
                printf("Số lượng phần tử chẵn là: %d\n", counter);
                printf("\n\n");
                break;

            case 5:
                for (int i = 0; i < 10; i++){
                    printf("Số thứ %d là: %d\n", i+1, array[i]);
                }
                printf("\n\n");
                break;

            case 6:
                break;

            default:
                printf("Không hợp lệ\n\n");
                break;
    }
    } while (menu !=6);
    return 0;
}