//Annie Wu
//Aatena Hasan
// Elshaday Assefa

#include <iostream>
#include <string>
using namespace std;

void calculate(int a, int b); //prototype
int main() {
	
	int a, b;
	
	cout << "Enter two integers: ";
	cin >> a >> b;
	
	calculate(a, b);
	
}
	void calculate (int x, int y) {
		int total = x + y;
		double avg = static_cast<double>(total)/ 2;
		
		cout << "The total is " << total << " and the average is " << avg << endl;
	}
	
	


