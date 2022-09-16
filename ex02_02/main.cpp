#include <iostream>
using namespace std;
void main(){
	
	int count,unit_price, money, tax, total, change;

	cout << "까페 모카 단가 입력->";
	cin >> unit_price;

	cout << "수량 입력-> ";
	cin >> count;

	cout << "지불한 돈 입력-> ";
	cin >> money;

	tax = unit_price * count * 0.1;
	total = unit_price * count + unit_price * count * 0.1;
	change = money - total;
	cout << "부가세 : " << tax << "\n";
	cout << "상품총액 : " << total << "\n";
	cout << "거스름돈 : " << change << "\n";
}