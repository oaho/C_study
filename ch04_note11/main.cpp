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
		cout << "\n ������ �ϳ��� �Է��ϼ���. -> ";
		cin >> a;
		result = myAbs(a);
		cout << " ���� ���밪�� " << result << " �̴�.\n" ;

}