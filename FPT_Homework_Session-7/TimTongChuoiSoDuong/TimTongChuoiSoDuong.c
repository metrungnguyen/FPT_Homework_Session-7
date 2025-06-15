#include <stdio.h>

int main(){

    int size;
    do{
        printf("Nhập số lượng của mảng: ");                 // Biến nhập vào kích thước của mảng
        scanf("%d", &size);
    }while(size <= 0);

    int num[size];                                          // Mảng num

    for(int i = 0; i < size; i ++){                         // Duyệt mảng
        printf("Nhập các phần tử vào mảng: ");
        scanf("%d", &num[i]);
    }

    int sum = 0;                                            // Biến đếm (Nếu là số dương)

    int maxSum = 0;                                         // Biến lưu trữ tổng cao nhất

    for(int i = 0; i < size; i ++){                         // Duyệt lại mảng
        if(num[i] > 0){
            sum = sum + num[i];
            if(sum > maxSum){
                maxSum = sum;                               // Cập nhật lại tổng cao nhất
            }
        }else{
            sum = 0;
        }
    }
    printf("Chuỗi số dương có tổng lớn nhất là %d", maxSum);
    return 0;
}