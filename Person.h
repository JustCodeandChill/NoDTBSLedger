#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string name;
	float balance;
public:
	Person();
	Person(string);
	Person(string, float);
	~Person();
	//getter setter
	string getName();
	float getBalance();
	void setName(string);
	void setBalance(float);
	void printAll();
	
	//a person can lent, borrow money from other or transfer unconditionally
	void transferMoney(Person &,float);
	void borrowMoney(Person &, float);
	void lentMoney(Person &, float);
};

#endif // PERSON_H
