#include <iostream>
using namespace std;
void main(){

	int time;
	int hour;
	int min;
	int sec;
	int rest;

	cout << "초를 입력하세요-> " ;
	cin >> time;

	hour = time / 3600;
	rest = time % 3600;

	min = rest / 60;
	sec = rest % 60;

	cout << time << " 초는 " << hour << "시간 " << min << "분 " << sec << "초이다. \n";




}