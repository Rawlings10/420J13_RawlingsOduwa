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

		cout << "Create your password:" << endl;
		getline(cin, passWord);

		UserAcount account(id, userName, passWord);
		//cout << account.ID << endl;
	}

	//the method to log in the account
	bool Login(string loginUserName, string LoginPassWord) {
		if (loginUserName == USERNAME && LoginPassWord == PASSWORD) {
			return true;
		}
		else {
			return false;
		}
	}

};

int main() {
	//variables to create the user account
	int id = NULL;
	string username, password;
	//variables to log in the user account
	string login_name, login_password;

	UserAcount account(id, username, password);
	account.CreateAccount(id, username, password);

	while (true) {
		cin.ignore(numeric_limits<streamsize>::max() << '\n');
		cout << "Enter your Username: " << endl;
		getline(cin,login_name);

		cout << "Enter your password: " << endl;
		getline(cin,login_password);
		account.Login(login_name, login_password);

		if (account.Login(login_name, login_password)) {
			cout << "Log In Successful \n\n\n Account: " << account.ID << endl;
			break;
		}
		else {
			cout << "Log in Failed \n\n";
		}
	}
	

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
