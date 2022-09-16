#include <iostream>
using namespace std;
#define N 5 // 학생수
void main() {
	int kor[N] = {90, 80, 70, 60, 100};
	int math[N] = {81, 91, 81, 81, 100};
	double avg[N];    //학생평균
	int order[N];     //학생석차
	int i, u;

	for(i=0; i<N; i++)
		avg[i] = (double)(kor[i] + math[i])/2;
	
	for(i=0; i<N; i++)
	{
		order[i]=1;
		for(u=0; u<N;u++){
			if(avg[i] < avg[u])
				order[i]++;
		}

	}
	cout << "번호\t국어\t수학\t석차\n";
	cout << "================================";
	for(u=0; i<N; i++)
		cout << i+1 << "\t" << kor[i] << "\t" 
			<< math[i] << "\t" << avg[i] << "\t"
			<< order[i] << "\n";

}