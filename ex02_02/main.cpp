#include <iostream>
using namespace std;
void main(){
	
	int count,unit_price, money, tax, total, change;

	cout << "���� ��ī �ܰ� �Է�->";
	cin >> unit_price;

	cout << "���� �Է�-> ";
	cin >> count;

	cout << "������ �� �Է�-> ";
	cin >> money;

	tax = unit_price * count * 0.1;
	total = unit_price * count + unit_price * count * 0.1;
	change = money - total;
	cout << "�ΰ��� : " << tax << "\n";
	cout << "��ǰ�Ѿ� : " << total << "\n";
	cout << "�Ž����� : " << change << "\n";
}