#include <iostream>
using namespace std;
class Student {
private :
	int no;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
public :
	Student(int no, char *name, int kor, int math, int eng);
	void calculate();
	void print();

};
void main() {

	Student student1(1, "È²¼øÇý", 99, 80, 95);
	Student student2(2, "ÀÌ¹Î¿ì", 60, 80, 90);
	Student student3(3, "±è´öÀ±", 85, 70, 90);
	
	cout << "ÇÐ»ý¹øÈ£ ÀÌ¸§   ±¹¾î ¿µ¾î ¼öÇÐ ÃÑÁ¡  Æò±Õ\n";
	student1.print();
	student2.print();
	student3.print();


}

Student :: Student( int no, char *name, int kor, int math, int eng)
{
	this -> no = no;
	strcpy(this -> name, name);
	this -> kor = kor;
	this -> eng = eng;
	this -> math = math;
	calculate();
}
void Student :: calculate()
{
	total = kor + eng + eng + math;
	avg = total / 3.0;
}
void Student :: print() {

	cout << no << "\t" << name << "\t" << kor << "\t" << eng << "\t" << math << "\t" << total << "\t" << avg << "\n";
}