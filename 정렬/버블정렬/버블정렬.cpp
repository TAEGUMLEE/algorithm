#include <stdio.h>

int main(void){
	int i, j, tmp;
	
	int arr[10] = {1,10,5,8,7,6,4,3,2,9};
	//���� ���� 
	for(i=0; i<10; i++){ //1ȸ�� 
		for(j=0; j<9; j++){ //1ȸ���� ������ �ݺ��ϸ� ���� �ִ� ���� ���Ͽ� �������� ������ ������ ū���� �ڷ� ������(�ش� ȸ���� ������ ���� ū���� ���������� ��) 
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
