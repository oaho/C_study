#include <iostream>
using namespace std;
struct sungjuck{
	char name[16];
	int kor[5];
	int eng[5];
	int math[5];
	int tot;
	double ave;

};
void structPrn (sungjuck temp);
sungjuck structInput();
void main()
{
	sungjuck x, y, z;
	x=structInput();
	y=structInput();
	z=structInput();
	

	cout << "이름 \t 국어 \t 영어 \t 수학 \t 총점 \t 평균 ";
	cout << "\n--------------------------------------\n";
	structPrn(x);
	structPrn(y);
	structPrn(z);
	
}
void structPrn(sungjuck temp) {
	cout << "\n" << temp.name << "\t" << temp.kor << "\t" << temp.eng << "\t" << temp.math << "\t" << temp.tot
		<< temp.ave;

}
sungjuck structInput()
{
	sungjuck temp;
	cout <<"이름을 입력하시오->\n";
	cin >> temp.name;
	cout << "국어 점수를 입력하시오->\n";
	cin >> temp.kor;
	cout << "영어 점수를 입력하시오->\n";
	cin >> temp.eng;
	cout << "수학 점수를 입력하시오->\n";
	cin >> temp.math;
};