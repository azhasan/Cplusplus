#include <iostream>
#include <iomanip>
 using namespace std;
 
 int main() {
 	
 	int gallon = 0;
 	int miles = 0;
 	
 	
 	cout << "How many gallons of gas can your car hold? ";
 	cin >> gallon;
 	
 	cout << "How many miles can your car drive on a full tank? ";
 	cin >> miles;
 	
 	double milesPerGallon = static_cast<double>(miles) / gallon;
 	
 	cout << "------------------------------------" << endl;
 	
 	cout << fixed << setprecision (1);
 	cout << "Miles per tank:" << setw(9) <<  miles << endl;
 	cout << "Gallons per tank:" << setw(7) << gallon << endl;
 	cout << "Miles per gallon: " << setw(6) << milesPerGallon << endl;
 	
 	return 0;
 }
