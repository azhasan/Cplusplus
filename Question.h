#include <string>

using namespace std;

class Question {
	
	private:
		 string questNum;
		 string question;
		 string choice1;
		 string choice2; 
		 string choice3;
		 string choice4;
		 string correctChoice;
		
	public:
		Question();
		Question(string num, string q, string c1, string c2, string c3, string c4, string correctC);
		void printQ();
		string getQNum();
		bool checkAns(string userChoice);	
	
};
