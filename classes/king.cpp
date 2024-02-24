#include "chess.hpp" //król
#define n 8
#define taking 2

int King::move(int board[8][8],int xPos, int yPos){
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return 0;

    if((x==xPos+1 || x==xPos-1 || x==xPos) && (y==yPos+1 || y==yPos-1 || y==yPos) && (!(x==xPos && y==yPos))){
        if(board[xPos][yPos]==0) return 1;
        else if(color && 0<board[xPos][yPos]<=6 ) return taking; // dla bialych
        else if(!(color) && 6<board[xPos][yPos]<12) return taking; // dla czarnych
    }
    else return 0;
}