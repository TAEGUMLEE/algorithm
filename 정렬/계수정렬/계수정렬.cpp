#include <stdio.h> 

int main(void){
	int temp;
	int count[5];
	int array[30] = {
		1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
		3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
		3, 1, 4, 3, 5, 1, 2, 1, 1, 1
	};
	for(int i = 0; i < 5; i++){ //기준을 카운트할 공간 
		count[i] = 0;
	}
	for(int i = 0; i < 30; i++){//크기를 기준으로 삼았으므로 그 기준에 맞으면 카운트가됨(array[i] - 1 이 해당 값의 기준값을 구하게 됨) 
		count[array[i] - 1]++;
	}
	for(int i = 0; i < 5; i++){ 
		if(count[i] != 0){//기준값이 카운트 되었으면 그 기준값의 크기만큼 기준값을 출력 
			for(int j = 0; j < count[i]; j++){
				printf("%d", i + 1);
			}
		}
	}
}
