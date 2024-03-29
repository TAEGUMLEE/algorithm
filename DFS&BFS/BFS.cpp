#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start] = true;
	while(!q.empty()){ // 큐가 빌때까지 반복 
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for(int i=0; i< a[x].size(); i++){ //꺼낸 노드와 인접한 노드들을 방문 하면서 
			int y = a[x][i];
			if(!c[y]){ //방문하지 않은 노드라면 
				q.push(y); //큐에 삽입 
				c[y] = true; //방문처리 
			}
		}
	}
}

int main(void){
	//인접한 노드환경을 만들어줌(테스트 케이스) 
	// 1과 2를 연결
	a[1].push_back(2);
	a[2].push_back(1);
	// 1과 3을 연결
	a[1].push_back(3); 
	a[3].push_back(1);
	// 2와 3을 연결
	a[2].push_back(3); 
	a[3].push_back(2);
	// 2와 4를 연결
	a[2].push_back(4);
	a[4].push_back(2); 
	// 2와 5를 연결
	a[2].push_back(5);
	a[5].push_back(2);
	// 3과 6을 연결
	a[3].push_back(6);
	a[6].push_back(3);
	// 3과 7을 연결
	a[3].push_back(7); 
	a[7].push_back(3);
	// 4와 5를 연결
	a[4].push_back(5);
	a[5].push_back(4);
	// 6과 7을 연결
	a[6].push_back(7);
	a[7].push_back(6); 
	// BFS 수행
	bfs(1);
	return 0;
}
