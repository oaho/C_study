#include <iostream>
using namespace std;
void main() {

	int i, re, temp;
	int a[N]={1,2,3,4,5};
	int cnt = 1;

	cout << "���� �� : ";
	for(i=0; i<N; i++)
		cout << a[i] << "\t";
	cout << "\n";

	for(re=1; re<N; re++)
	{
	for(i=0; i<N-1; i++)
	{
		if(a[i] > a[i+1])
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;


		}
		cout << "�ݺ�Ƚ�� : " << cnt++ << "\n";
	}
	}

	cout << "���� �� : ";
	for(i=0; i<N; i++)
		cout << a[i] << "\t";
	cout << "\n";
}