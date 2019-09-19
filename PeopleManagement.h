#ifndef PEOPLEMANAGEMENT_H
#define PEOPLEMANAGEMENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class PeopleManagement
{
private:
	Person *theGroup;
	int limitNumberOfPeople;
	int numberOfPeople;
public:
	void getAllPeopleName(); 
	void addPersonToGroup(Person);
	int getPersonIndex(const Person);
	Person createPerson();
	PeopleManagement();
	~PeopleManagement();
};

#endif // PEOPLEMANAGEMENT_H
