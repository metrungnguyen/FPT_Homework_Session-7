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

	for(int i = 0; i < size; i ++){
		if(player[i] % 2 == 0){
			printf("Số chẵn đầu tiên là %d", player[i]);
			break;
		}
	}
}