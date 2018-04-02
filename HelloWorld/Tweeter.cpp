#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::string;
using std::endl;

Tweeter::Tweeter(string first, string last, uint32_t age, string handle)
	: Person(first, last, age),
	  m_sTwitterHandle(handle)
{
	cout << "constructing tweeter " << m_sTwitterHandle << endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing " << m_sTwitterHandle << endl;
}
