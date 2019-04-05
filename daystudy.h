#ifndef DAYSTUDY_H
#define DAYSTUDY_H
#include <string>
#include <iostream>
#include <valarray>
class Base {
public:
	void show() const {
		std::cout << "����show����!" << std::endl;
	}
};

class Derived1 :virtual public Base {
public:
	void show() const {
		std::cout << "�̳���1show����!" << std::endl;
	}
	void test() const {
		std::cout << "�̳���1test����!" << std::endl;
	}
};

class Derived2 :public Derived1 {

};

class Derived3 :virtual public Base {
public:
	void test() const {
		std::cout << "�̳���1test����!" << std::endl;
	}
};

class Child :public Derived2, public Derived3 {
public:
	//void show() {
	//	std::cout << "child��show����!" << std::endl;
	//}
};
#endif // DAYSTUDY_H
