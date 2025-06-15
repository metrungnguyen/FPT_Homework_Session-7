#include <stdio.h>

int main(){

    int size;										// Biến nhập vào kích thước của mảng
	do{
		printf("Nhập số lượng các phần tử: ");
		scanf("%d", &size);
	}while(size <= 0);

    int num[size];                                  // Mảng num

    for(int i = 0; i < size; i ++){                 // Duyệt mảng
        printf("Nhập phần tử vào mảng: ");
        scanf("%d", &num[i]);
    }

    int maxStreak = 0;                              // Biến lưu trữ chuỗi cao nhất 
    
    int Streak = 0;                                 // Biến đếm (Nếu là số dương)

    for(int i = 0; i < size; i ++){                 // Duyệt lại mảng
        if(num[i] > 0){                                
            Streak += 1;
            if(Streak > maxStreak){
                maxStreak = Streak;                 // Cập nhật lại chuỗi cao nhất nếu nhỏ hơn bộ đếm
            }
        }else{
            Streak = 0;
        }
    }
    printf("Số lượng các số dương liên tiếp nhiều nhất là %d", maxStreak);
    return 0;
}