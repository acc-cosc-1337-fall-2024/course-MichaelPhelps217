#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

int main() 
{
	TicTacToeManager manager;
	std::string first_player;
	char user_choice = 'y';
	int gameSize=0;

	do
	{
		std::unique_ptr<TicTacToe> game;

		std::cout<<"3x3 or 4x4??: ";
		std::cin>>gameSize;
	
		if(gameSize == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else if(gameSize == 4)
		{
			game = std::make_unique<TicTacToe4>();
		}

		std::cout<<"Enter first player: ";
		std::cin>>first_player;

		game->start_game(first_player);
		int position;

		while(!game->game_over())
		{
			std::cout<<"Enter a position: ";
			std::cin>>position;
			game->mark_board(position);
			game->display_board();
		}
		manager.save_game(game);
		int x_wins, o_wins, ties;
		manager.get_winner_total(x_wins, o_wins, ties);

		std::cout<<"The winner is: "<<manager.get_last_game().get_winner()<<"\n";
		std::cout<<"X wins: "<<x_wins<<"\n";
		std::cout<<"O wins: "<<o_wins<<"\n";
		std::cout<<"Ties: "<<ties<<"\n";
		std::cout<<"\nPlay Again (y or n)? ";
		std::cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	int x_wins, o_wins, ties;
	manager.get_winner_total(x_wins, o_wins, ties);

	std::cout<<"X wins: "<<x_wins<<"\n";
	std::cout<<"O wins: "<<o_wins<<"\n";
	std::cout<<"Ties: "<<ties<<"\n";

	return 0;
}