#include <iostream>
using namespace std;

int total (int n);

void main()
{
	int n;
	cout << "���ڸ� �Է��ϼ��� -> ";
	cin >> n;
	cout << "1����" <<n << "������ ������ �� =" << total(n) << endl;


	total(n);




}

int total(int n)
{
	int sum = 0;
	for(int i=1; i<=n; i++)
		sum +=i;

	return sum;


}