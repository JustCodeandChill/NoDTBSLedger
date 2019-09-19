#include "Expenses.h"

Expenses::Expenses()
{
	this->totalExpenses = 0.0;
	this->expenseEachPerson = 0.0;
}

Expenses::~Expenses()
{
}
//Getter setter
float Expenses::getTotalExpenses() {return this->totalExpenses;}
float Expenses::getExpenseEachPerson() {return this->expenseEachPerson;}
void Expenses::setTotalExpenses(float amount) {this->totalExpenses = amount;}
void Expenses::setExpenseEachPerson(float amount) {this->expenseEachPerson = amount;}
void Expenses::printAll()
{cout << "Total expense: "  << this->totalExpenses << ".\nEach person pays: " << this->expenseEachPerson << ".\n";}
// End getter setter

// Modify property customly
void Expenses::addExpense(float amount){this->totalExpenses += amount;}
void Expenses::addExpenseEachPerson(float amount){this->expenseEachPerson += amount;} 
float Expenses::calculateAllExpenses(vector<float> prices){
	for (auto price : prices){
		this->totalExpenses += price; 
	}
	return this->totalExpenses;
}

float Expenses::calculateExpenseEachPerson(int n)
{ 
	this->expenseEachPerson = this->totalExpenses / n;
	return this->expenseEachPerson;
}
//End main functions