//Aatena Hasan
//Annie Wu

#include <iostream>
#include <string>

using namespace std;

int main() {
	string username, password;
	bool exit = true;


do {
		
	cout << "Enter a username" <<endl;
	cin >> username;
	
	for(int i =0; i < username.size(); i++) {
		if(!(isdigit(username[0]))) {
			exit = false;
		}
		else {
			exit= true;
		}
			
	}
} while(exit==true);
	
	exit = false;
	

		while(exit == false ) {
		
		cout << "enter a password" << endl;
		cin >> password;
		
			for(int i = 0; i < password.size(); i++) { 
				if((!isalnum(password[i]))) {
					exit = false;
				}
				if(isupper(password[i])){
					exit = false;
				}
				if(islower(password[i])) {
					exit = false;
				}
							
				if(isdigit(password[i])) {
					exit = false;
				}
				if(password[i] == password[i + 1] && password[i] == password[i+2]) {
					exit = true;
					cout << "type password again." <<endl;
					break;
				}
			}
					
	}
		

	return 0;
}
