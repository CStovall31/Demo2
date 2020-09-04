#include <iostream>
#include <string>

/*
Student Name: Courtney Stovall
Student NetID: cs3421
Compiler/IDE Used: Visual Studio
Program Description: The is program takes in user input for name hourly pay
					 and hours worked. Once the data has been collect the program
					 tells the user there total earned stipen.

*/

using namespace std;

class student_worker {

	string name;
	float hourly_pay;
	float hours_worked;
	float pay;

public:

	void worker_name() {

		cout << "Enter name: ";
		getline(cin, name);
	}

	void worker_pay() {

		cout << "Working hours rate: ";
		cin >> hourly_pay;
	}

	void worker_hours() {

		cout << "Enter total hours worked: ";
		cin >> hours_worked;
	}

	void calculation() {

		pay = hourly_pay * hours_worked;
	}

	void display() {

		cout << "\nStudent Details Below^:" << endl;
		cout << "Name: " << name << endl;
		cout << "Hourly worked hours: " << hourly_pay << endl;
		cout << "Total worked hours: " << hours_worked << endl;
		cout << "Total Earned Stipend per day: " << pay;
	}
};

int main() {

	student_worker worker;

	worker.worker_name();
	worker.worker_pay();
	worker.worker_hours();
	worker.calculation();
	worker.display();


}
