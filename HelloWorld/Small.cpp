#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name;
	cout << "Who are you?";
	cin >> name;

	string greeting_msg = "Hello, " + name;
	if (name == "Mohammad")
		greeting_msg+= ", I don't suppose you've got 72 virgins with you.";
	cout << greeting_msg << endl;

	return 0;

}
