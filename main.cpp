#include <stdio.h>
#include <iostream>
#include <vector> 
//Objects
#include "Expenses.h"
#include "Person.h"
#include "DebtManagement.h"
#include "PeopleManagement.h"
using namespace std;

int numberOfPeople = 3;

//template<typename T, typename... Args>
//float func(T t, Args... args) // recursive variadic function
//{
//    static float p = 0;
//	p += t;
//    func(args...);
//	return p;
//}

int main(int argc, char **argv)
{
	vector<float> prices = {1,2,3,4,5};
	Expenses e;
	e.calculateAllExpenses(prices);
	e.calculateExpenseEachPerson(3);
	e.printAll();
	Person p;
	p.setName("sad");
	
//	DebtManagement d(numberOfPeople);
//	d.getLedger();
//	d.borrowMoney(0,1,34);
//	d.getLedger();
//	d.borrowMoney(0,1,56);
//	d.getLedger();
//	d.borrowMoney(0,2,56);
//	d.getLedger();
//	d.setEachPersonExpenseToLedger();
//	d.getLedger();
//	cout << d.getTotalDebtOf(0) << endl;
//	cout << d.getDebtOfAToB(0,1) << endl;
	PeopleManagement hq;
	hq.addPersonToGroup(p);
	hq.getAllPeopleName();
	return 0;
}

