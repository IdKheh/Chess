class ChessBoard
{
private:
    int board[8][8];
public:
    ChessBoard();
    void setUp();
    void print();  
    void move(int x, int y, int xPos, int yPos, int value);
    void taking(int x, int y);
};