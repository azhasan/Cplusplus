#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	
	string name = "";
	int pop = 0;
	int date = 1950;
	
	cout << "Enter the city's name:";
	getline(cin, name);
	cout << endl;
	
	ofstream outputFile;
	outputFile.open("MyCity.txt");
	
	outputFile << "City Name: " << name;
	
	for(int i = date; i <= 2010; i+20){
		
		cout << "Enter the population in " << i << ": ";
		cin >> pop;
		
		if(pop < 1000) {
			outputFile << i <<": " << endl;
		}
		else if(1000<= pop < 2000){
			outputFile << i <<": *" << endl;
		}
		else if(2000<= pop < 3000){
			outputFile << i <<": **" << endl;
		}
		else if(3000<= pop < 4000){
			outputFile << i <<": ***" << endl;
		}
		else if(4000<= pop < 5000){
			outputFile << i <<": ****" << endl;
		}
		else if(5000<= pop < 6000){
			outputFile << i <<": *****" << endl;
		}
		else if(6000<= pop < 7000){
			outputFile << i <<": ******" << endl;
		}
		else if(7000<= pop < 8000){
			outputFile << i <<": *******" << endl;
		}

		
}

	outputFile.close();	
return 0;
}
