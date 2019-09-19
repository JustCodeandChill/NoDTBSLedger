#include "Person.h"

Person::Person()
{
	this->name = "";
	this->balance = 0.0;
}

Person::Person(string name)
{
	this->name = name;
	this->balance = 0.0;
}

Person::Person(string name, float balance)
{
	this->name = name;
	this->balance = balance;
}

Person::~Person()
{
}
//Start getter setter
string Person::getName(){return this->name;}
float Person::getBalance(){return this->balance;}
void Person::setName(string name){this->name = name;}
void Person::setBalance(float balance){this->balance = balance;}
void Person::printAll(){std::cout << "" << this->name << ": $" << this->balance << ".\n";}
//End getter setter

//Start transaction functions
void Person::transferMoney(Person &p, float amountOfMoney){
	this->balance -= amountOfMoney;
	p.balance += amountOfMoney;
}
void Person::borrowMoney(Person &p, float amountOfMoney){
	this->balance += amountOfMoney;
	p.balance -= amountOfMoney;
}
void Person::lentMoney(Person &p, float amountOfMoney){
	this->balance -= amountOfMoney;
	p.balance += amountOfMoney;
}