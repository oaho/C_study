#include <iostream>
using namespace std;

int total (int n);

void main()
{
	int n;
	cout << "숫자를 입력하세요 -> ";
	cin >> n;
	cout << "1부터" <<n << "까지의 정수의 합 =" << total(n) << endl;


	total(n);




}

int total(int n)
{
	int sum = 0;
	for(int i=1; i<=n; i++)
		sum +=i;

	return sum;


}