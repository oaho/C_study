#include <iostream>
using namespace std;
void main() {
		int dan;
		cout << "원하는 단을 입력하세요 -> ";
		cin >> dan;
		for(int j=1; j<10; j++)
			cout << dan << " * " << j << " = " << dan*j << "\n";
}
