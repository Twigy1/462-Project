#include "Login.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn()
{
	string username, password, un, pw;

	cout << "Enter username: "; cin >> username;
	cout << "Enter Password: "; cin >> password;

	ifstream read("Source/Framework/Util/" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool login()
{
	int choice;

	cout << "1: Register" << endl << "2: Login" << endl << "Your Choice: "; cin >> choice;
	if (choice == 1)
	{
		string username, password;

		cout << "select a username: "; cin >> username;
		cout << "select a password: "; cin >> password;

		payment();

		ofstream file;
		file.open("Source/Framework/Util/" + username + ".txt");
		file << username << endl << password;
		file.close();

		cout << "Registration Complete" << endl;

		login();
	}
	else if (choice == 2)
	{
		bool status = IsLoggedIn();

		if (!status)
		{
			cout << "False Login" << endl;
			return false;
		}
		else
		{
			cout << "Succesfully logged in" << endl;
			return true;
		}
	}
}