#include <iostream>
using namespace std;
void main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int i;

	cout << "������ ���� ��� \n";
	for(i=0; i<5; i++)
		cout << a[i] << " ";
	cout << "\n";

	cout << "������ �ּ� ���� ��� \n";
	for(i=0; i<5; i++)
		cout << &a[i] << " ";
	cout << "\n";




}