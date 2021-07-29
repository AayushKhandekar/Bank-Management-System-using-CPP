// create objects at runtime
// display vector objects
// Login / Signup
// Data update

#include <iostream>
#include <vector>
using namespace std;

class User {

	private:
	string userName;
	int userAccountNumber;
	int userPassword;
	float userBalance;

	public:

	// Default Constructor
	User() {

		userName = " ";
		userAccountNumber = 0;
		userBalance = 0;
		userPassword = 0;
	}

	// Parameterized Constructor
	// Not working will fix later
	User(string name, int acc, int pass ,float balance) {

		userName = name;
		userAccountNumber = acc;
		userPassword = pass;
		userBalance = balance;
	}

	void userSignup(string name, int acc, int pass ,float balance){

		userName = name;
		userAccountNumber = acc;
		userPassword = pass;
		userBalance = balance;
	}

	// Display User Details
	void displayUser(){

		cout << "User Details : " << endl;
		cout << "1. Account Number: " << userAccountNumber << endl;
		cout << "2. Name : " << userName << endl;
		cout << "3. Balance : " << userBalance << endl;
	}
};

int main(){

	vector<User> userData;	
	User u1;

	int choice;
	cout << "1. Login \n2. Signup" << endl;
	cin >> choice;

	switch(choice){

   	case 1:

		int tempAccNumber, tempPassword;
		
		cout << "Account Number : ";
		cin >> tempAccNumber;
		cout << "Password : ";
		cin >> tempPassword;
      	
		break; 

   	case 2: {

		int tempAccNumber, tempPassword;
		string tempName;
		float tempDeposit;

		cout << "Name (without space): ";
		cin >> tempName;
		cout << "Password : ";
		cin >> tempPassword;
		cout << "Deposit Amount : ";
		cin >> tempDeposit;
		cout << "Account Number : ";
		cin >> tempAccNumber;

		u1.userSignup(tempName, tempAccNumber, tempPassword, tempDeposit);

      	break; 
	}
  
   	default : 

	   	cout << "Enter a valid choice!" << endl;
		break;
	}

	userData.push_back(u1);
	return 0;
}