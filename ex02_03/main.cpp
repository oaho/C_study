#include <iostream>
using namespace std;
void main(){

	int time;
	int hour;
	int min;
	int sec;
	int rest;

	cout << "�ʸ� �Է��ϼ���-> " ;
	cin >> time;

	hour = time / 3600;
	rest = time % 3600;

	min = rest / 60;
	sec = rest % 60;

	cout << time << " �ʴ� " << hour << "�ð� " << min << "�� " << sec << "���̴�. \n";




}