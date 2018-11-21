#include <string>
#include <iostream>
#include "Player.h"

	void Player::storeRight(Question* ans) {
		right.push_back(ans);
	}
	
	void Player::storeWrong(Question* ans) {
		wrong.push_back(ans);
	}
	int Player::getNumberOfRight(){
		return right.size();
	}
	void Player::getQ(Question* ans) {
		for(int i = 0; i < right.size(); i++) {
			if(right[i] == ans) 
				cout << right[i]->getQNum() << " ";
		}
	}
