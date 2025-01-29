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
	void CreateAccount() {
		while (true) {
			cout << "Create your ID:" << endl;
			cin >> ID;	
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (cin.fail()) {
				cout << "invalid ID...please use numeric characters.\n\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else {
				break;
			}
		}

		cout << "Create your Username:" << endl;
		getline(cin, USERNAME);

		cout << "Create your password:" << endl;
		getline(cin, PASSWORD);
		cout << "\n\n";
	}

	//the method to log in the account
	bool LoginCheck(string loginUserName, string LoginPassWord) {
		if (loginUserName == USERNAME && LoginPassWord == PASSWORD) {
			return true;
		}
		else {
			return false;
		}
	}
	//this method log the user into the account
	void Login() {
		//variables to log in the user account
		string login_name, login_password;

		while (true) {
			cout << "--LOG IN--" << endl;
			cin.ignore(numeric_limits<streamsize>::max() << '\n');
			cout << "Enter your Username: " << endl;
			getline(cin, login_name);

			cout << "Enter your password: " << endl;
			getline(cin, login_password);
			LoginCheck(login_name, login_password);

			if (LoginCheck(login_name, login_password)) {
				cout << "Log In Successful \nAccount: " << ID << endl;
				break;
			}
			else {
				cout << "Log in Failed...invalid name and password \n\n";
			}
		}
	}

};

int main() {
	//variables to create the user account
	int id;
	string username, password;

	// the class object setting the argument to null untill the user create an account.
	UserAcount account(0, "", "");

	//create the actual user account
	account.CreateAccount();

	//loop to check if the log in matches the user acount.
	account.Login();

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
