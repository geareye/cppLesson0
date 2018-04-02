#include "Person.h"
#include "Tweeter.h"

#include <iostream>
#include <string>

#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
//using namespace std;


int main()
{
	Person p1("Giray", "Yalcin", 30);
	{
		Tweeter t1("Someone", "Else", 456, "@whatever");
		string name2 = t1.getName();


		Person p2;

	}//p2 Person object will stay in scope until here.

	std::string name = p1.getName();

	//vector<int> vi;
	//for (int i=0; i<10; i++)
	//	vi.push_back(i);
	//for (auto item:vi)
	//	cout << item << " ";

return 0;
}//p1 Person object will stay in scope until the last bracket here.
