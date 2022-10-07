#pragma once
#include <vector>


class computer_player 
{
public:
	


	int do_move(const int& stones) const override
	{
		std::vector<int> moves{ 3,1,1,2 };


		int move = moves[stones % 4];
		print("Computer nimmt " + std::to_string(move) + " Steine.");

		return move;
	}
};