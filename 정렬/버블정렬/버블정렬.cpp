#include <stdio.h>

int main(void){
	int i, j, tmp;
	
	int arr[10] = {1,10,5,8,7,6,4,3,2,9};
	//버블 정렬 
	for(i=0; i<10; i++){ //1회차 
		for(j=0; j<9; j++){ //1회차시 구간을 반복하며 옆에 있는 수와 비교하여 작은수를 앞으로 보내고 큰수를 뒤로 보낸다(해당 회차가 끝나면 가장 큰값이 오른쪽으로 감) 
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	for(i = 0; i<10; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
