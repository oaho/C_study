#include <iostream>
using namespace std;
void main(){
	
	int num;

	cout << "10000 보다 작은 정수를 입력하세요->";
	cin >> num;

	int thous, hund, ten, one;

	thous = num / 1000;
	hund = (num % 1000)/ 100;
	ten = ((num % 1000) % 100)/10;
	one = ((num % 1000) % 100)%10;

	cout << "정수값 : " << num << "\n";
	cout << "천의 자리 : " << thous << "\n" ;
	cout << "백의 자리 : " << hund << "\n" ;
	cout << "십의 자리 : " << ten << "\n" ;
	cout << "일의 자리 : " << one << "\n" ;

			


}