class Chess
{
protected:
    int x;
    int y;
    int value;
    bool color; //czybiale
    bool moved;
    bool exsist;
public:
    Chess(int xPos, int yPos, int v, bool c){
        x=xPos;
        y=yPos;
        value=v;
        color=c;
        moved=false;
        exsist=true;
    }
    virtual int move(int board[8][8], int xPos, int yPos) override{ };// czy można wykonać ruch
};

class King: public Chess{
    public:
        King(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        int move(int board[8][8], int xPos, int yPos) override;
};
class Knight: public Chess{
    public:
        Knight(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        int move(int board[8][8], int xPos, int yPos) override;
};
class Pawn: public Chess{
    public:
        Pawn(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        int move(int board[8][8], int xPos, int yPos) override;
        void change();
};
class Queen: public Chess{
    public:
        Queen(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        int move(int board[8][8], int xPos, int yPos) override;
};
class Rook: public Chess{
    public:
        Rook(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        int move(int board[8][8], int xPos, int yPos) override;

};
class Bishop: public Chess{
    public:
        Bishop(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        int move(int board[8][8], int xPos, int yPos) override;
};