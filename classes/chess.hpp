class Chess
{
protected:
    int x;
    int y;
    int value;
    bool color;
public:
    Chess(int xPos, int yPos, int v, bool c){
        x=xPos;
        y=yPos;
        value=v;
        color=c;
    }
    virtual bool move(int xPos, int yPos){ };// czy można wykonać ruch
    virtual bool taking(int x, int y){ };// czy można wykonać ruch
};

class King: public Chess{
    public:
        King(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        bool move(int xPos, int yPos) override;
        bool taking(int x, int y) override;
};
class Knight: public Chess{
    public:
        Knight(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        bool move(int xPos, int yPos) override;
        bool taking(int x, int y) override;
};
class Pawn: public Chess{
    public:
        Pawn(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        bool move(int xPos, int yPos) override;
        bool taking(int x, int y) override;
        void change();
};
class Queen: public Chess{
    public:
        Queen(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        bool move(int xPos, int yPos) override;
        bool taking(int x, int y) override;
};
class Rook: public Chess{
    public:
        Rook(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        bool move(int xPos, int yPos) override;
        bool taking(int x, int y) override;

};
class Bishop: public Chess{
    public:
        Bishop(int xPos, int yPos, int v, bool c):Chess(xPos,yPos,v,c){};
        bool move(int xPos, int yPos) override;
        bool taking(int x, int y) override;
};