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
	

	cout << "�̸� \t ���� \t ���� \t ���� \t ���� \t ��� ";
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
	cout <<"�̸��� �Է��Ͻÿ�->\n";
	cin >> temp.name;
	cout << "���� ������ �Է��Ͻÿ�->\n";
	cin >> temp.kor;
	cout << "���� ������ �Է��Ͻÿ�->\n";
	cin >> temp.eng;
	cout << "���� ������ �Է��Ͻÿ�->\n";
	cin >> temp.math;
};