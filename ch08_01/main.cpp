#include <iostream>
using namespace std;
struct namecard{
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};
void main(){
	struct namecard man;

	cout << " 이름을 입력하세요=>";
	cin >> man.name;
	cout << " 직업을 입력하세요=>";
	cin >> man.job;
	cout << " 연락처를 입력하세요=>";
	cin >> man.tel;
	cout << " 이메일을 입력하세요=>";
	cin >> man.email;

	cout << "\n 입력받은 데이터를 출력합니다.";
	cout << "\n 이름 \t 직업 \t 연락처 \t 이메일";
	cout << "\n ================================================";
	cout << "\n " << man.name << "\t " << man.job << "\t " << man.tel << "\t " << man.email;
	cout << "\n ================================================";
	cout << "\n 구조체 변수의 메모리 사이즈 =>" << sizeof(namecard) << "\n";





}