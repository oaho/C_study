#include <iostream>
using namespace std;
#define N 5
void main() {
	cout << "N���� ������ ������� �Է��϶� \n";

	double quiz[N];
	int sum = 0, cnt = 0, i;
	double avg;
	
	for(int i=0; i<N; i++){
		cout << i+1 << "���� ���� ������? ";
		cin >> quiz[i];
	}
	
	for(int i=0; i<N; i++){
		sum += quiz[i];
	}
	avg = (double)sum/N;
	
	for(i=0; i<N; i++){
		if(quiz[i] < avg)
			cnt++;
	}
	cout << "==================================================\n";
	cout << "��ȣ\t ����\t ��հ��� ���� \n";
	cout << "--------------------------------------------------\n";
	for(i=0; i<N; i++){
		cout << i+1 << "\t" << quiz[i] << "\t"
			<< quiz[i] - avg << "\n";
	}

	cout << "--------------------------------------------------\n";
	
	cout << "��� : " << avg << "�� \n" ;
	cout << "��չ̸� : " << cnt << "�� \n" ;
	cout << "--------------------------------------------------\n";
}