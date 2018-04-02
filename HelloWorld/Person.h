#pragma once

#include <string>
#include <stdint.h>
#include <iostream>

enum class FileError
{
	notfound,
	ok
};

enum Status
{
	Pending,
	Approved,
	Cancelled
};

class Person {
public:
	Person(std::string first, std::string last, uint32_t age);
	Person();
	~Person();
	std::string getName();

private:
	std::string 	m_sFirstName;
	std::string 	m_sLastName;
	uint32_t	 	m_nAge;

	uint32_t	 	DummyFunction();


};
