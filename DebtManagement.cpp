#include "DebtManagement.h"

DebtManagement::DebtManagement(int numberOfPeople)
{
	this->numberOfPeople = numberOfPeople;
	this->ledger = new float*[numberOfPeople];
	for(int i=0; i < numberOfPeople; i++){
		ledger[i] = new float[numberOfPeople];
	}
	
	this->resetLedger();
}

DebtManagement::~DebtManagement()
{
	for(int i=0; i < numberOfPeople; i++){
		 delete [] ledger[i];
	}
	delete [] ledger;
}

//Start Getter Setter
void DebtManagement::getLedger(){
	cout << "------Head Ledger------\n";
	for (int i=0; i < numberOfPeople; i++){
		for (int j=0; j < numberOfPeople; j++){
			cout << setw(5) << ledger[i][j] << " ";
		}
		cout << "\n";
	}
}

float DebtManagement::getTotalDebtOf(int indexA){
	float debt = 0.0;
	for (int i=0; i < numberOfPeople; i++)
	{
		debt += ledger[indexA][i];
	}
	return debt;
};
float DebtManagement::getTotalMoneyLentOf(int indexA){};
float DebtManagement::getDebtOfAToB(int indexA, int indexB){
	return ledger[indexA][indexB];
}
float DebtManagement::getMoneyLendFromAToB(int indexA, int indexB){
	return ledger[indexB][indexA];
}
void DebtManagement::setEachPersonExpenseToLedger(){
	Expenses e;
	e.setExpenseEachPerson(213);
	float eachPersonExpense = e.getExpenseEachPerson();
	cout << eachPersonExpense << endl;
	for (int i=0; i < numberOfPeople; i++)
		for (int j=0; j < numberOfPeople; j++)
			if (i == j){
				ledger[i][j] += eachPersonExpense;
			}
}

void DebtManagement::resetLedger(){
	this->setValueToAllLedger(0);
}


//End Getter Setter

//Start Write-in function
void DebtManagement::borrowMoney(int indexA, int indexB, float amount){
	if (indexA == indexB){
		cout << "A Person should not borrow himself.\n";
		return;
	}
	if (amount < 0){
		cout << "A Person should not borrow negative amount of money.Just use lent function instead.\n";
		return;
	}
	ledger[indexA][indexB] += amount;
	ledger[indexB][indexA] += amount*-1;
	cout << indexA << " borrow " << amount << " money from" << indexB << endl; 
}

void DebtManagement::lentMoney(int indexA, int indexB, float amount){
	if (isSamePerson(indexA,indexB)){
		cout << "A Person should not lent himself.\n";
		return;
	}
	if (isNegativeAmount(amount)){
		cout << "A Person should not lent negative amount of money.Just use borrow function instead.\n";
		return;
	}
	ledger[indexB][indexA] += amount*-1;
	ledger[indexA][indexB] += amount;
	cout << indexA << " lent " << amount << " money to" << indexB << endl;
}

//utilities func
bool DebtManagement::isSamePerson(int name1, int name2){
	return (name1 == name2) ? true : false;
}

bool DebtManagement::isNegativeAmount(float amount){
	return (amount < 0) ? true : false;
}

void DebtManagement::setValueToAllLedger(float value){
	for(int i=0; i < numberOfPeople; i++){
		for(int j=0; j < numberOfPeople; j++)
			ledger[i][j] = value;
	}
}

//check balance function for lentMoney