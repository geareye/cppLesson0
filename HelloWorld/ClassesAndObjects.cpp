#include "Person.h"

#include <iostream>
#include <string>

#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	Person p1("Giray", "Yalcin", 30);
	std::string name = p1.getName();

	vector<int> vi;
	for (int i=0; i<10; i++)
		vi.push_back(i);
	//for (auto item:vi)
	//	cout << item << " ";

return 0;
}
