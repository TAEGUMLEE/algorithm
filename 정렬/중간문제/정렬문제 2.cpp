#include <iostream> 
#include <algorithm>
#include <vector> 

using namespace std;

int n;
vector <string> v;

int getSum(string a){
	int n = a.length();
	int sum = 0;
	
	for(int i =0; i<n; i++){
		//숫자인 경우에만 더함
		if(a[i] - '0' <= 9 && a[i] - '0' >=0){
			sum += a[i] - '0';
		}
	}
	return sum;
}

bool compare(string a, string b){
	//길이가 짧은 순서 우선
	if(a.length() != b.length()) {
		return a.length() < b.length();
	}
	//길이가 같다면
	else {
		int aSum = getSum(a);
		int bSum = getSum(b);
		//글에 포함된 숫자의 합으로 정렬
		if( aSum != bSum) {
			return aSum < bSum;
		}else{
		return a < b; //사전 순으로 정렬 	
		}
	} 
}

int main(void){
	cin >> n;
	
	string input;
	
	for(int i= 0; i<n; i++){
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end(), compare);
	
	for(int i = 0; i<n; i++){
		cout << v[i] << endl;
	}
	return 0;
}
