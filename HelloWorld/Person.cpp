#include "Person.h"
using namespace std;


Person::Person(string firstname, string lastname, uint32_t  age)
	: m_sFirstName(firstname), m_sLastName(lastname), m_nAge(age)
{
	cout << " Constructing "
			<< getName() << endl;
}

Person::Person() : m_nAge(0)
{
	cout << " Constructing " <<
			m_sFirstName << " " << m_sLastName << endl;
}

Person::~Person()
{
	cout << " Destructing " <<
				m_sFirstName << " " << m_sLastName << endl;
}

string Person::getName()
{
	return m_sFirstName + " " + m_sLastName;
}

uint32_t Person::DummyFunction()
{
	uint32_t returnval = 0;
	return returnval;
}
