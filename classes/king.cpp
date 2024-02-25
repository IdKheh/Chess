#include "chess.hpp" //krol
#define n 8
#define roszada 4;
#define taking 2
#define moving 1
#define badMove 0

int King::move(int board[8][8],int xPos, int yPos){
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return badMove;

    if((x==xPos+1 || x==xPos-1 || x==xPos) && (y==yPos+1 || y==yPos-1 || y==yPos) && (!(x==xPos && y==yPos))){
        if(board[yPos][xPos]==0){
            moved=true;
            return moving;
        }
        else if((color && 0<board[yPos][xPos]<7)||(!(color) && 6<board[yPos][xPos]<13)){
            moved=true;
            return taking;
        } // dla bialych i czarnych
    }
    return badMove;

}