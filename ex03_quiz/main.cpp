#include <iostream>
using namespace std;
void main()
{
	
	int i, quiz, sum = 0, pass=0, fail=0;
	double avg;


	for(i=1; i<= 10;i++)
	{
		cout << i << "번의 퀴즈 점수는? " ;
		cin >> quiz;

		sum+= quiz;

		if(quiz >= 70){
			pass ++;
		}else{
			fail++;


		}




	}
	avg = sum / 10;

	cout << "=======================\n";
	cout << "평균 : " << avg << " 점 \n";
	cout << "통과자 : " << pass << " 명 \n";
	cout << "탈락자 : " << fail << " 명 \n";
}

