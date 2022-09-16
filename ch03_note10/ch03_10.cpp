#include <iostream>
using namespace std;
void main() {
	int total = 0;
	int i;
	for(i=1; i<=5; i++) {
		cout << "i =" << i << endl;
		total+=i;
		cout << "total =" << total << endl;
	}

	cout << "1부터 " << i-1 << " 까지의 합계는 " << total << "입니다" << endl;
}



