#include <iostream>


using namespace std;

void print(double printWages[], int ID[], int size);
//5658845, 4520125, 7895122, 8777541

int main() {
	int empID[4]= {5658845, 4520125, 7895122, 8777541};
	
	int hours[4];
	double payRate[4];
	double wages[4];
		
	
	for(int i = 0; i < 4; i++) {
	
		int userHours = 0;
		double userPay = 0, userWage = 0;
			
		cout << "Employee " << i + 1 << endl;
		cout << "Enter hours and pay rate" << endl;
		
		cin >> userHours >> userPay; 
		
		hours[i] = userHours;
		
		payRate[i] = userPay;
		
		wages[i] = hours[i] * payRate[i];
	
	
		
	} 
	
		print(wages, empID, 4);
	
	return 0;
}


	void print(double printWages [], int ID[], int size) {
		
		for(int i = 0; i < size; i++) {
			
	 		cout << "Employee " << ID[i] << ": " << printWages[i] << endl;
		}
		
	}




