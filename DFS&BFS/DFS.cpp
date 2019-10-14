#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[8];
vector<int> a[8];

void dfs(int x){
	if(c[x]) return; //해당 노드를 방문했다면 DFS를 끝냄 
	c[x] = true; //방문처리 
	cout << x << ' '; 
	for(int i=0; i< a[x].size(); i++){ //DFS 알고리즘을 재귀로 구현(반복적으로 인접노드의 DFS를 수행) 
		int y = a[x][i];
		dfs(y);
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
	// DFS 수행
	dfs(1);
	return 0;
}
