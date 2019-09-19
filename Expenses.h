#ifndef EXPENSES_H
#define EXPENSES_H
#include <iostream>
#include <vector> 
using namespace std;

class Expenses
{
private:
	float totalExpenses;
	float expenseEachPerson;
public:
	Expenses();
	~Expenses();
	
	//geter setter
	float getTotalExpenses();
	float getExpenseEachPerson();
	void setTotalExpenses(float);
	void setExpenseEachPerson(float);
	void printAll();
	
	//Main functions
	void addExpense(float);
	void addExpenseEachPerson(float); 
	float calculateAllExpenses(vector<float>); //Should use for first time input data
	float calculateExpenseEachPerson(int n);
};

#endif // EXPENSES_H
