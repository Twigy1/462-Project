#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void payment()
{
	int agree;

	cout << "Type 1 to pay" << endl;
	cin >> agree;

	if (agree == 1) 
	{

		cout << "Payment Complete" << endl;

	}else
	{
		
		cout << "Payment incomplete please try again" << endl;
		payment();

	}
}