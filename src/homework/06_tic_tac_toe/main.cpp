#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
	std::string first_player;
	char user_choice = 'y';

	do
	{
		std::cout<<"Enter first player: ";
		std::cin>>first_player;

		game.start_game(first_player);
		int position;

		while(!game.game_over())
		{
			std::cout<<"Enter a position: ";
			std::cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		std::cout<<"Play Again (y or n)? ";
		std::cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}