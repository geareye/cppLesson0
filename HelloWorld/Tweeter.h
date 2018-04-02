#pragma once

#include "Person.h"

#include <string>

class Tweeter : public Person
{
public:
	Tweeter(std::string first,
			std::string last,
			uint32_t age,
			std::string m_sTwitterHandle);
	~Tweeter();
private:
	std::string m_sTwitterHandle;
};
