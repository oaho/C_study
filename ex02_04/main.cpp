#include <iostream>
using namespace std;
void main(){
	
	int num;

	cout << "10000 ���� ���� ������ �Է��ϼ���->";
	cin >> num;

	int thous, hund, ten, one;

	thous = num / 1000;
	hund = (num % 1000)/ 100;
	ten = ((num % 1000) % 100)/10;
	one = ((num % 1000) % 100)%10;

	cout << "������ : " << num << "\n";
	cout << "õ�� �ڸ� : " << thous << "\n" ;
	cout << "���� �ڸ� : " << hund << "\n" ;
	cout << "���� �ڸ� : " << ten << "\n" ;
	cout << "���� �ڸ� : " << one << "\n" ;

			


}