#include "header.h"

int main() {
	CircleList C;
	CircleList D;
	C.add(Student("Park Dongguk", "2022001").getName()+"," + Student("Park Dongguk", "2022001").getId());
	C.add(Student("Lee Dongguk", "2022002").getName() + "," + Student("Lee Dongguk", "2022002").getId());
	C.add(Student("Choi Dongguk", "2022003").getName() + "," + Student("CHou Dongguk", "2022003").getId());
	C.add(Student("Kim Dongguk", "2022004").getName() + "," + Student("Kim Dongguk", "2022004").getId());
	cout << "--- ALL STUDENTS"<<endl;
	cout << C.front() << endl;
	D.add(C.front());
	C.remove();
	C.advance();
	cout << C.front() << endl;
	D.add(C.front());
	C.remove();
	C.advance();	
	cout << C.front() << endl;
	C.advance();
	cout << C.front() << endl;
	D.add(C.front());
	C.remove();
	C.advance();
	
	cout << "--- Next Record was DELETED" << endl;
	cout<< D.back()<< endl;
	cout << D.front() << endl;
	D.advance();
	cout << D.front() << endl;
	return 0;
}