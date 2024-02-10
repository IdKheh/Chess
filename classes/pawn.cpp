#include "chess.hpp" //pion
#define n 8
#define taking 2
Pawn::int move(int board[8][8],int xPos, int yPos) override{
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return 0;

    if(color && y==yPos+1 && x==xPos){
        if(board[xPos][yPos]==0) return 1;
        else if(0<board[xPos][yPos]<=6) return taking;
    }
    else if(!(color)&& y==yPos-1 && x==xPos){
        if(board[xPos][yPos]==0) return 1;
        else if(0<board[xPos][yPos]<=6) return taking;
    }
    else return 0;
}
Pawn::void change(){
    //TODO: zrobić zaminę pionka w jakiegoś innego
}