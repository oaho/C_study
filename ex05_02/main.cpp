#include <iostream>
using namespace std;
void absolute(int *pa);
void main()
{
	int a=-10;
	cout << "main ���� �Լ� ȣ�� �� a �� = " << a << "\n";
	absolute(&a);
	cout << "main ���� �Լ� ȣ�� �� a�� = " << a << "\n";
}
void absolute(int *pa) {
	if(*pa < 0) *pa = -*pa;
}
