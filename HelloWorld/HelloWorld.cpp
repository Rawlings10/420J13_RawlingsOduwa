#include <iostream>
#include <string>
#include <limits> // For numeric_limits

using namespace std;

class UserAcount
{
public:
	int ID;
	string USERNAME;
	string PASSWORD;

	//constructor for the class UserAcount
	UserAcount(int id, string userName, string passWord)
		: ID(id), USERNAME(userName), PASSWORD(passWord) {}

	//the method to create the user account
public:
	void CreateAccount(int id, string userName, string passWord) {
		cout << "Create your ID:" << endl;
		cin >> id;
		cin.ignore();

		cout << "Create your Username:" << endl;
		getline(cin, userName);

		cout << "Create your password:";
		getline(cin, passWord);

		UserAcount account(id, userName, passWord);
	}

};

int main() {
	int id;
	string username, password;
	cout << "Create your ID:" << endl;
	cin >> id;
	cin.ignore();

	cout << "Create your Username:" << endl;
	getline(cin, username);

	cout << "Create your password:";
	getline(cin, password);

	UserAcount account(id, username, password);
	cout << account.ID << endl;

	return 0;

};
	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
