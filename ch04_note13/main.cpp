#include <iostream>
using namespace std;
int max(int, int);
void main()
{
	int a, b;
	cout << "\n �������� �ΰ� �Է��ϼ���. => ";
	cin >> a >> b;

	cout << " �ִ� => " << max(a, b) << "\n";
}
int max(int x, int y)
{
	return ( (x>y) ? x : y);

}