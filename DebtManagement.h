#ifndef DEBTMANAGEMENT_H
#define DEBTMANAGEMENT_H
#include <iostream>
#include <iomanip>
#include "Expenses.h"
using namespace std;
class DebtManagement
{
private:
	float **ledger;
	int numberOfPeople = 0;
public:
	DebtManagement(int);
	~DebtManagement();
	// Getter setter
	void setEachPersonExpenseToLedger();
	void getLedger();
	void resetLedger();
	float getTotalDebtOf(int);
	float getTotalMoneyLentOf(int);
	float getDebtOfAToB(int, int);
	float getMoneyLendFromAToB(int, int);
	//Write in ledger
	void borrowMoney(int, int, float);
	void lentMoney(int, int, float);
	//utilities
	bool isSamePerson(int, int);
	bool isNegativeAmount(float);
	void setValueToAllLedger(float);
};

#endif // DEBTMANAGEMENT_H
