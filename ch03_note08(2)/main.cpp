#include <iostream>
using namespace std;
void main() 
{
	int score;
	char grade;
	cout << "점수를 입력하세요-> ";
	cin >> score;

	switch(score/10) {
		case 10 : cout<< "A학점입니다." << endl;
		case 9 : cout<< "A학점입니다." << endl;
		case 8 : cout<< "B학점입니다." << endl;
		case 7 : cout<< "C학점입니다." << endl;
		case 6 : cout<< "D학점입니다." << endl;
		default : cout << "F학점입니다." << endl;
	}
cout << "입력한 점수 " << score << " 은" << grade << "학점입니다.\n";




}