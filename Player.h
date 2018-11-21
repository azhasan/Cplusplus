#include <vector>
#include <string>
#include "Question.h"

using namespace std;

class Player {
	private:
		int playernum;
		std::vector<Question*> right;
		std::vector<Question*> wrong;
		
	public:
		
		void storeRight(Question* ans);
		void storeWrong(Question* ans);
		int getNumberOfRight();
		void getQ(Question* ans);
		
}; 
