#include "PeopleManagement.h"

PeopleManagement::PeopleManagement()
{
	limitNumberOfPeople = 99;
	this->numberOfPeople = 0;
	theGroup = new Person[limitNumberOfPeople];
}

PeopleManagement::~PeopleManagement()
{
	delete [] theGroup;	
}

//Start getter setter
void PeopleManagement::getAllPeopleName(){
	for (int i=0; i < numberOfPeople; i++)
	{
		theGroup[i].getName();
		cout << " ";
	}
}

int PeopleManagement::getPersonIndex(const Person person){
	for (int i=0; i < numberOfPeople; i++){
		if (theGroup[i].getName() == person.getName()){
			cout << "The name " << person.getName() << " index is " << i << endl;
			return i;
		}
	}
	return false;
}

void PeopleManagement::addPersonToGroup(Person person){
	theGroup[numberOfPeople] = person;
	numberOfPeople++;
}

Person PeopleManagement::createPerson(){
	string name = "";
	float balance = 0.0;
	cout << "Input name of the person: ";
	cin >> name;
	cout << "Input balance of the person";
	cin >> balance;
	Person person(name,balance);
	return person;
}
//End getter setter
