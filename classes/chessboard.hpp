#include "chess.hpp"
#include <vector>
#include <memory>
class ChessBoard
{
public:
    int board[8][8];
    std::vector<std::unique_ptr<Chess>> black;
    std::vector<std::unique_ptr<Chess>> white;

    ChessBoard();
    ~ChessBoard();
    void print();  
    void move(int x, int y, int xPos, int yPos, int value);
    void taking(int x, int y,int xPos, int yPos, int value);
};