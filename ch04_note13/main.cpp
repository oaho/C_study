#include <iostream>
using namespace std;
int max(int, int);
void main()
{
	int a, b;
	cout << "\n 정수값을 두개 입력하세요. => ";
	cin >> a >> b;

	cout << " 최댓값 => " << max(a, b) << "\n";
}
int max(int x, int y)
{
	return ( (x>y) ? x : y);

}