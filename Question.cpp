#include "Question.h"
#include <iostream>

	Question::Question() {
		questNum = "";
		question = "";
		choice1 = "";
		choice2 = "";
		choice3 = "";
		choice4 = "";
		correctChoice = "";
	}
	
	Question::Question(string num, string q, string c1, string c2, string c3, string c4, string correctC){
		questNum = num;
		question = q;
		choice1 = c1;
		choice2 = c2;
		choice3 = c3;
		choice4 = c4;
		correctChoice = correctC;
	}
	
	string Question::getQNum() {
		return questNum;
	}
	
	bool Question::checkAns(string userChoice) {
		return userChoice.compare(correctChoice);
	}
	void Question:: printQ() {
 		cout << "Question " << questNum << ":" << endl;
 		cout << question << endl;
		cout << choice1 << endl;
		cout << choice2 << endl;
		cout << choice3 << endl;
		cout << choice4 << endl;
	}
	
	

