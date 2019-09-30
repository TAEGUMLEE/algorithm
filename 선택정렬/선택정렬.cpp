#include <stdio.h>
//선택정렬 
int main(void){
	int temp, min, index;
	int arr[] = {1,10,5,8,7,6,4,3,2,9};
	
	for(int i=0; i<10; i++){
		min = 9999;
		for(int j=i; j<10; j++){
			if(min > arr[j]){
				min = arr[j];
				index  = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	for(int i = 0; i<10; i ++){
		printf("%d ", arr[i]);
	}
	return 0; 
}
