#include <iostream>
using namespace std;
void main() {
	int a[5], i;
	int max;

	cout << "������ �����͸� 5�� �Է��϶�\n";

	for(i=0; i<5; i++){
		cout << "a[ " << i << " ] - > ";
		cin >> a[i];
	}	
	max = a[0];

	for (i=1; i<5; i++)
		if(a[i] > max)
			max = a[i];

	cout << "�ִ� : " << max << "\n";




}