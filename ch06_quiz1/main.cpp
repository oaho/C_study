#include <iostream>
using namespace std;
#define N 5
void main() {
	cout << "N명의 점수를 순서대로 입력하라 \n";

	double quiz[N];
	int sum = 0, cnt = 0, i;
	double avg;
	
	for(int i=0; i<N; i++){
		cout << i+1 << "번의 퀴즈 점수는? ";
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
	cout << "번호\t 점수\t 평균과의 차이 \n";
	cout << "--------------------------------------------------\n";
	for(i=0; i<N; i++){
		cout << i+1 << "\t" << quiz[i] << "\t"
			<< quiz[i] - avg << "\n";
	}

	cout << "--------------------------------------------------\n";
	
	cout << "평균 : " << avg << "점 \n" ;
	cout << "평균미만 : " << cnt << "점 \n" ;
	cout << "--------------------------------------------------\n";
}