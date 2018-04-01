#include "Person.h"

Person::Person(std::string firstname, std::string lastname, uint32_t  age)
	: m_sFirstName(firstname), m_sLastName(lastname), m_nAge(age)
{

}

std::string Person::getName()
{
	return m_sFirstName + " " + m_sLastName;
}
