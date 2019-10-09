#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	vector<pair<int, string> > v; //한 쌍의 데이터를 묶어줌
	v.push_back(pair<int, string>(90, "김길규"));
	v.push_back(pair<int, string>(85, "이지금"));
	v.push_back(pair<int, string>(82, "박동구"));
	v.push_back(pair<int, string>(98, "강종규"));
	v.push_back(pair<int, string>(79, "이정욱"));
	
	sort(v.begin(), v.end());
	
	for(int i=0; i< v.size(); i++){
		cout << v[i].second << ' '; //삽입된 두번째 값 출력(여기서는 이름)
	}
}
