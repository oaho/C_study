#include <iostream>
using namespace std;
#define N 5

void main() {
	int a[N];
	int min, max;
	int i;

	cout << "���� ������ 5�� �Է��϶� \n";

	for(i=0; i<N; i++){
		cout << "a[ " << i << " ] -> ";
		cin >> a[i];
	}
	max = a[0];

	for(i=1; i<N; i++){
		if(a[i] > max)
			max = a[i];
	}

	min = a[0];

	for(i=1; i<N; i++){
		if(a[i] < min)
			min = a[i];
	
	
	}

	cout << "�ִ� : " << max << "\n";
	cout << "�ּڰ� : " << min << "\n";



}
