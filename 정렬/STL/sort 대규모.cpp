#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public:
		string name;
		int score;
		Student(string name, int score){
			this -> name = name;
			this -> score = score;
		}
		// 정렬 기준은 '점수가 작은 순서'
		bool operator <(Student &student) {
			return this->score < student.score;
		}
};

int main(void){
	Student students[] = {
		Student("aaa", 90),
		Student("bbb", 93),
		Student("ccc", 87),
		Student("ddd", 66),
		Student("eee", 83),
	};
	sort(students, students + 5);
	for(int i = 0; i< 5; i++){
		cout << students[i].name << ' ';
	}
}
