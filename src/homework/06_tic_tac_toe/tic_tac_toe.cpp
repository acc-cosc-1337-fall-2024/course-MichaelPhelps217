//cpp
#include "tic_tac_toe.h"

//public
bool TicTacToe::game_over()
{
    if(check_row_win() || check_column_win() || check_diagonal_win())
    {
        if(player == "X")
        {
            set_winner("O");
        }
        else
        {
            set_winner("X");
        }
        return true;
    }

    if(check_board_full())
    {
        set_winner("C");
        return true;
    }

    return false;
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i + 1]<<"|"<<pegs[i + 2]<<"\n";
    }
}

std::string TicTacToe::get_winner()
{
    return winner;
}

//This is new.
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

//private
void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if(pegs[i] != " " && pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6])
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 9; i+= 3)
    {
        if(pegs[i] != " " && pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2])
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    std::string center = pegs[4];

    if(center != " " && ((pegs[0] == center && pegs[8] == center) || (pegs[2] == center && pegs[6] == center)))
    {
        return true;
    }
    return false;
}

void TicTacToe::set_winner(std::string winner)
{
    this->winner = winner;
}

//This is new.
void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else if(winner == "C")
    {
        ties++;
    }
}