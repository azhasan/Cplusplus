//Annie Wu
//Aatena Hasan

#include <iostream>
#include <string>

using namespace std;
void concatenate(string &input);
void replaceString(string &input);
void newString(string &input);


int main() {
	
	bool run = true;
	string input = "";
	int choice = 0;
	
	cout << "Enter a string: ";
	getline(cin, input);
	
	while (run) {
				
		cout << "1. Concatenate to end of string"
				"\n2. Search and replace substring"
				"\n3. Enter a new string"
				"\n4. Exit.\n";
					
		cin >> choice;
		
		switch (choice) {
			case 1:
				concatenate(input);
				break;
			case 2:
				replaceString(input);
				break;
			case 3:
				newString(input);
				break;
			case 4:
				run = false;
				break;
			}
	}
	
	
	return 0;
}

void concatenate(string &input) {
	cin.ignore();
	string endString;
	
	cout << "Enter the string you want to concatenate to the current string: ";
	getline(cin, endString);
	
	input = input + endString;
	cout << "Current String: " << input << endl;
}

void replaceString(string &input) {
	cin.ignore();
	string substring;
	
	cout << "Enter substring you want to replace: ";
	getline(cin, substring);
	
	int index = input.find(substring);
	
	if (index < 0) {
		cout << "Substring could not be found." << endl;
	}
	else {
		string replace;
		int length = substring.length();
		
		cout << "Enter the string you want to replace this with: ";
		getline(cin, replace);
		input.replace(index, length, replace);
		cout << "Current string: " << input << endl;
	}
}

void newString(string &input) {
	cin.ignore();
	cout << "Enter a new string: ";
	getline(cin, input);
	
	cout << "Current String: " << input << endl;
}

