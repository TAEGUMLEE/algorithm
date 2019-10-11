#include <stdio.h>

int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main(void){
	//먼저 전체 트리 구조를 최대 힙 구조로 바꿈 
	for(int i=1; i<number ; i++){
		int c = i;
		do{
			int root = (c -1 ) / 2;
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while( c!= 0);
	}
	//크기를 줄여가며 반복적으로 힙을 구성
	for(int i = number -1; i>=0; i--){ //루트 노드와 가장 마지막의 노드를 바꿔줌(루트 노드의 값이 가장 큰 값이므로 마지막으로 보내면 자연스럽게 오름차순이됨) 
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do{
			c = 2 * root + 1;
			//자식 중에 더 큰 값 찾기
			if(heap[c] < heap[ c + 1 ] && c < i -1) {
				c++;
			}
			// 루트보다 자식이 더 크면 교환
			if(heap[root] < heap[c] && c < i) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		}while (c < i);
	}
	for(int i =0; i< number; i++ ){
		printf("%d ", heap[i]);
	}
}
