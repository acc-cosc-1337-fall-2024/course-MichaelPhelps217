#include "tic_tac_toe_3.h"

// TicTacToe3::TicTacToe3()
// {
//     TicTacToe3(): TicTacToe(3){}
// }


/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
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

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe3::check_row_win()
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

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/

bool TicTacToe3::check_diagonal_win()
{
    std::string center = pegs[4];

    if(center != " " && ((pegs[0] == center && pegs[8] == center) || (pegs[2] == center && pegs[6] == center)))
    {
        return true;
    }
    return false;
}
