#include <iostream>
using namespace std;
void main()
{
	
	int i, quiz, sum = 0, pass=0, fail=0;
	double avg;


	for(i=1; i<= 10;i++)
	{
		cout << i << "���� ���� ������? " ;
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
	cout << "��� : " << avg << " �� \n";
	cout << "����� : " << pass << " �� \n";
	cout << "Ż���� : " << fail << " �� \n";
}

