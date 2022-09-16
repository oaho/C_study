#include <iostream>
using namespace std;
int myAbs(int x)
{
	int y;
	if(x<0)
		y=-x;
	else
		y=x;
	return y;
}
	void main()
	{
		int a, result;
		cout << "\n 정수값 하나를 입력하세요. -> ";
		cin >> a;
		result = myAbs(a);
		cout << " 구한 절대값은 " << result << " 이다.\n" ;

}