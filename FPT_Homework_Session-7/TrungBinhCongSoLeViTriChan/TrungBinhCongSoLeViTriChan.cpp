#include <stdio.h>

int main(){

	int size;
	do{
		printf("Nhập số lượng các phần tử: ");
		scanf("%d", &size);
	}while(size <= 0);

	int player[size];

	for(int i = 0; i < size; i ++){
		printf("Nhập phần tử vào mảng: ");
		scanf("%d", &player[i]);
	}

	int s = 0;		// Tong cac so le
	int c = 0;		// So luong cac so le

	for(int i  = 0; i < size; i ++){
		if(player[i] % 2 == 1 && i % 2 == 0){
			s = s + player[i];
			c ++;
		}
	}
	if(c > 0){
		float tbc = (float)s / c;
		printf("TBC số lẻ: %.1f", tbc);
	}else{
		printf("Mảng không có số lẻ");
	}
}