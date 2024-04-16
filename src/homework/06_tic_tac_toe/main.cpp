#include "tic_tac_toe.h"

int main() 
{
	TicTacToeManager games;
	std::string first_player;
	char user_choice = 'y';

	do
	{
		TicTacToe game;

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
		games.save_game(game);
		int x_wins, o_wins, ties;
		games.get_winner_total(x_wins, o_wins, ties);

		std::cout<<"The winner is: "<<game.get_winner()<<"\n";
		std::cout<<"X wins: "<<x_wins<<"\n";
		std::cout<<"O wins: "<<o_wins<<"\n";
		std::cout<<"Ties: "<<ties<<"\n";
		std::cout<<"\nPlay Again (y or n)? ";
		std::cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	int x_wins, o_wins, ties;
	games.get_winner_total(x_wins, o_wins, ties);

	std::cout<<"X wins: "<<x_wins<<"\n";
	std::cout<<"O wins: "<<o_wins<<"\n";
	std::cout<<"Ties: "<<ties<<"\n";

	return 0;
}