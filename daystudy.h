#ifndef DAYSTUDY_H
#define DAYSTUDY_H
#include <string>
#include <iostream>
#include <valarray>
class Base {
public:
	void show() const {
		std::cout << "基类show方法!" << std::endl;
	}
};

class Derived1 :virtual public Base {
public:
	void show() const {
		std::cout << "继承类1show方法!" << std::endl;
	}
	void test() const {
		std::cout << "继承类1test方法!" << std::endl;
	}
};

class Derived2 :public Derived1 {

};

class Derived3 :virtual public Base {
public:
	void test() const {
		std::cout << "继承类1test方法!" << std::endl;
	}
};

class Child :public Derived2, public Derived3 {
public:
	//void show() {
	//	std::cout << "child类show方法!" << std::endl;
	//}
};
#endif // DAYSTUDY_H
