#include <string>
#include <stdint.h>

class Person {
public:
	Person(std::string first, std::string last, uint32_t age);
	std::string getName();
private:
	std::string 	m_sFirstName;
	std::string 	m_sLastName;
	uint32_t	 	m_nAge;

};
