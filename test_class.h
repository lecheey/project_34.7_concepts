#pragma once
#include <string>

class myClass{
private:
	std::string _str;
	int _int;
public:
	myClass(){}
	~myClass(){}
	//virtual ~myClass(){} // для тестов

	int hash(){ return _int;  }
	//void hash(); // для проверки
	std::string toString() { return _str; }	
	//int toString(){ return _int; } // для проверки
};

