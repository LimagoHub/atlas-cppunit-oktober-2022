#pragma once
#include <iostream>
#include <vector>


class computer_player 
{
public:
	


	int do_move(const int& stones) const 
	{
		std::vector<int> moves{ 3,1,1,2 };


		int move = moves[stones % 4];
		std::cout << "Computer nimmt " + std::to_string(move) + " Steine." << std::endl;

		return move;
	}
};