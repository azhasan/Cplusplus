//Aatena Hasan
//Annie Wu
//Elshaday Assefa

#include <iostream>

using namespace std;

int *duplicateArray(int array[], int size);

int main() {
	int usersize;
	cout << "How big do you want to make your array?";
	cin >> usersize;
	
	int *array = new int[usersize];
	
	for(int i = 0; i < usersize; i++) {
		array[i] = i + 1;
	}
	
	int *dupePointer = duplicateArray(array, usersize);
	
	for(int i = 0; i < usersize; i++) {
		cout << *(dupePointer + i) << " ";
	}

	return 0;
}

int *duplicateArray(int array[], int size){
	
	int *duplicate = new int(size);

	for(int i = 0; i < size; i++) {
		duplicate[i] = array[i];
	}
	
	return duplicate; //pointer

}
	

