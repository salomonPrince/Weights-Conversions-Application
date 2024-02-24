//Name: Jabra Jabra
//Date:2022-04-16
//Description: Weights Conversions Application - 420-AP1-AS–PROJECT 2

#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;


// Global constaint variables Declaration
const double kg = 2.20462;
const double lbs = 0.453592;


// Functions Declaration

//print_welcome, print_main_list, exit, error_option
// no return only print
void print_welcome();
void print_main_list();
void exit();
void error_option();

// getMax, getMin, LbsTokg, KgTolbs
// Wparam double[] - result elements of Weight
// // &param double& - number of Weight
double getMax(double weight[], double& box);
double getMin(double weight[], double& box);
double getAvg(double weight[], double& box);
void LbsTokg(double weight[], double& box);
void KgTolbs(double weight[], double& box);

// printKG, printlb
// Wparam const double[] - result elements of Weight
// // &param double& - number of Weight
void printKG(const double weight[], double& box);
void printlb(const double weight[], double& box);


double weight[15]; // Global array size[15] Declaration -  result elements of Weight  -
double box = 0; // Global variable - number of Weight



int main()
{
	system("cls"); // clear screen
	print_welcome(); //call function
	print_main_list(); //call function

	// local variables - to use in switch
	int option; 
	char ans;

	cout << "\nEnter your option\n";
	cout << "Type here:";
	cin >> option;
	cout << endl;

	// switch functions
	switch (option)
	{
		case 1: {
			do { // start looping
				LbsTokg(weight, box); //call function
				printKG(weight, box); //call function
				getMax(weight, box); //call function
				getMin(weight, box); //call function
				getAvg(weight, box); //call function
				cout << "\nDo you want add Weights again..? Press (Y, N): ";
				cin >> ans;
				box = 0;

			} while (ans == 'Y' || ans == 'y'); // end looping
			main(); //call main() function

		}break;

		case 2: {

			do {// start looping
				KgTolbs(weight, box); //call function
				printlb(weight, box); //call function
				getMax(weight, box); //call function
				getMin(weight, box); //call function
				getAvg(weight, box); //call function
				cout << "\nDo you want add Weights again..? Press (Y, N): ";
				cin >> ans;
				box = 0;

			} while (ans == 'Y' || ans == 'y'); // end looping
			main(); //call main() function

		}break;

		case 3: {
			exit(); //call function
		}break;

		default: {
			error_option(); //call function
		}break;


	}//End Switch


	return 0;
}



// function Definition

void print_welcome()
{
	cout << "\t\t\t\t\t     Wellcome to Project II   \n";
	cout << "\t\t\t\t\t   420 - AP1 - AS - PROJECT 2 \n";
	cout << "\t\t\t\t\t weights conversions Application \n";
	cout << "\t\t\t\t\t*---*---*---*---*---*---*---*---*\n\n\n";
}

void print_main_list()
{
	cout << setw(25) << "Main Menu\n\n";
	cout << "1-  Conversion weight from lbs to KG\n\n";
	cout << "2-  conversion weight from KG to LBS\n\n";
	cout << "3-  Exit the application\n\n";
}

void exit() {

	system("cls"); // clear screen 
	print_welcome(); //call function
	char ch; //local variable
	cout << "Do you want to logout...!! Enter (Y, N)" << endl;
	cin >> ch;
	cout << "\n\n\n";

	if (ch == 'Y' || ch == 'y') {
		system("cls"); // clear screen
		print_welcome(); //call function
		cout << "\n\n\n";
		cout << "\t\t\t\t\t\tThanks for using\n\n"
			<< "\t\t\t\t\t weights conversions Application   ";
		// using loop to print increase '.' 
		for (int i = 0; i < 1; i++) {
			ch = i;
			Sleep(700); cout << "=";
			Sleep(700); cout << "=";
			Sleep(700); cout << "=";
			Sleep(700); cout << "=";
			Sleep(700); cout << ">>";
		}//end for
		cout << "\n\n\n";
	}//end if
	else {
		main();
	}//end else

}// end function

void error_option() {
	system("cls"); // clear screen
	print_welcome(); //call function
	// show error text when user input different double 
	if (!cin.good()) {
		while (!cin.good()) {
			cerr << "Incorrect value...!\n";
			cout << "Return to Main Menu ";
			// using loop to print increase '.' 
			for (int i = 0; i < 5; i++) {

				Sleep(700);
				cout << '.';
			} //end for
			cin.clear();
			cin.ignore(INT_MAX, '\n');

		}//end while
	}//end if
	else {
		// show error text when user input out of range of swicth case number
		cerr << "Incorrect value...!\n";
		cout << "Return to Main Menu ";
		// using loop to print increase '.' 
		for (int i = 0; i < 5; i++) {

			Sleep(700);
			cout << '.';
		}//end for
	}//end else
	cout << endl;
	main(); // return to main()

}

void LbsTokg(double weight[], double& box) {
	system("cls"); // clear screen 
	print_welcome(); //call function
	
	//local variables 
	int i = 0;
	double num;

	clog << "Enter a wieght in pounds...!!!\n";
	cout << "Weight No. " << i + 1 << ": ";
	cin >> num;

	// show error text when user input different double
	while (!cin.good()) {
		cerr << "Incorrect value...! Please try again\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Weight No. " << i + 1 << ": ";
		cin >> num;
	}// End While

	// looping to compute Lbs To kg
	while ((num > 0)) {

		// computing Lbs To kg
		num *= lbs;
		weight[i] = num;
		box++;
		i++;
		cout << "Weight No. " << i + 1 << ": ";
		cin >> num;

		// show error text when user input different double
		while (!cin.good()) {
			cerr << "Incorrect value...! Please try again\n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Weight No. " << i + 1 << ": ";
			cin >> num;

		}// end while error text
	} //end while loop
	cout << endl;
} // end function

void KgTolbs(double weight[], double& box) {
	system("cls"); // clear screen
	print_welcome(); //call function
	
	//local variables
	int i = 0;
	double num;

	clog << "Enter a wieght in kilograms...!!!\n";
	cout << "Weight No. " << i + 1 << ": ";
	cin >> num;

	// show error text when user input different double
	while (!cin.good()) {
		cerr << "Incorrect value...! Please try again\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Weight No. " << i + 1 << ": ";
		cin >> num;
	}// end while

	// looping to compute kg To lbs
	while ((num > 0)) {
		
		// computing kg To lbs
		num *= kg;
		weight[i] = num;
		box++;
		i++;
		cout << "Weight No. " << i + 1 << ": ";
		cin >> num;

		// show error text when user input different double
		while (!cin.good()) {
			cerr << "Incorrect value...! Please try again\n";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Weight No. " << i + 1 << ": ";
			cin >> num;
		}// end while error text

	}// end while loop
	cout << endl;
}// end function

void printKG(const double weight[], double& box) {

	cout << "The Weights are: \n\n";

	// looping to print result in kg
	for (int i = 0; i < box; i++) {

		cout << i + 1 << "- " << weight[i] << " KG\t\n\n";

	}//end for


}//end function

void printlb(const double weight[], double& box) {

	cout << "The Weights are: \n\n";

	// looping to print result in lbs
	for (int i = 0; i < box; i++) {

		cout << i + 1 << "- " << weight[i] << " LBS\t\n\n";

	}//end for


}// end function

double getMax(double weight[], double& box) {

	//local variable
	double max = 0;

	//looping to compute max
	for (int i = 0; i < box; i++) {
		if (weight[i] > max)
			max = weight[i];
	}//end for

	cout << "The Maximum of Weights: " << max << endl;
	return max; // getting max as result
}

double getMin(double weight[], double& box) {

	//local variable
	double min = 99999;

	//looping to compute max
	for (int i = 0; i < box; i++) {
		if (weight[i] < min)
			min = weight[i];

	}//end for

	cout << "The Minimum of Weights: " << min << endl;
	return min; // getting min as result
}

double getAvg(double weight[], double& box) {
	
	//local variables
	double sum = 0;
	double avg;

	//looping to compute avg
	for (int i = 0; i < box; i++) {

		sum += weight[i];
		avg = sum / box;
	}//end for

	cout << "The Average of Weights: " << avg << endl;
	return avg; // getting min as result
}

