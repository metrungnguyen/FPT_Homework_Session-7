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

	for(int i  = size - 1; i >= 0; i --){
		if(player[i] % 2 == 1){
			printf("Số lẻ cuối cùng là %d", player[i]);
			break;
		}
	}
}