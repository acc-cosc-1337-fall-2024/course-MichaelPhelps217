//h
#include "iostream"
#include "string"
#include "vector"
#include <memory>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    std::string get_winner();
    TicTacToe(){};
    TicTacToe(int);
private:
    std::string player;
    void clear_board();
    void set_next_player();
    bool check_board_full();
    void set_winner(std::string);
    std::string winner;
protected:
    std::vector<std::string> pegs;
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};

class TicTacToeManager
{
public:
    void save_game(std::unique_ptr<TicTacToe> &b);
    void get_winner_total(int& x, int& o, int& t);
    TicTacToe get_last_game();
private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(std::string winner);
    //std::ostream& operator<< (std::ostream& stream, const TicTacToe& games);
};


#endif