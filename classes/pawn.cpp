#include "chess.hpp" //pion
#include <iostream>
#define n 8
#define change 3
#define taking 2
#define moving 1
#define badMove 0


int Pawn::move(int board[8][8],int xPos, int yPos) {
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return badMove;

    std::cout<<x<<" "<<y<<" "<<xPos<<" "<<yPos<<" "<<board[yPos][xPos]<<" "<< color<<std::endl;

    if((color && y==yPos+1 && x==xPos && moved && board[yPos][xPos]==0)|| (!(color)&& y==yPos-1 && x==xPos && moved)){ // kolejne ruchy
        return moving;
    }


    else if((color && y==yPos+2 && x==xPos && !(moved) && board[yPos][xPos]==0 && board[xPos][y-1]==0) || // pierwszy ruch

    
    (!(color)&& y==yPos-2 && x==xPos && !(moved) && board[yPos][xPos]==0 && board[yPos][xPos]==0)) {
        moved=true;
        return moving;
    }


    else if((color && 0<board[yPos][xPos]<7 && x==xPos+1 && y==yPos+1) && (color && 0<board[yPos][xPos]<7 && x==xPos+1 && y==yPos+1)) return taking;
    else if(((yPos==7 && (!color)&& y==yPos+1)||(yPos==0 && color && y==yPos-1))&& board[yPos][xPos]==0 && x==xPos){
        return change;
    }

    return badMove;

}