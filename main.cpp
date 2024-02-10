#include <iostream>
//#include "classes/chess.hpp"
#include "classes/chessboard.hpp"

int main(int argc, char const *argv[])
{
    ChessBoard board;
    board.print();
    board.move(5,2,4,5,3);
    std::cout<<"\n\n\n";
    board.print();
    return 0;
}
