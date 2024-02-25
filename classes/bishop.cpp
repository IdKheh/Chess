#include "chess.hpp" //goniec
#define n 8
#define taking 2
#define moving 1
#define badMove 0

int Bishop::move(int board[8][8],int xPos, int yPos){
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return badMove;

    if(board[yPos][xPos] == 0){ //ruch
        if(x<xPos && y<yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || board[yPos][xPos]!=0 || xPos >n || yPos>n) return badMove;
                xPos--;
                yPos--;
            }
            return moving;
        }
        else if(x>xPos && y<yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || board[yPos][xPos]!=0 || xPos >n || yPos>n) return badMove;
                xPos++;
                yPos--;
            }
            return moving;
        }
        else if(x<xPos && y>yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || board[yPos][xPos]!=0 || xPos >n || yPos>n) return badMove;
                xPos--;
                yPos++;
            }
            return moving;
        }
        else if(x>xPos && y>yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || board[yPos][xPos]!=0 || xPos >n || yPos>n) return badMove;
                xPos++;
                yPos++;
            }
            return moving;
        }
    }
    else if((color && 0<board[yPos][xPos]<7)||(!(color) && 7<board[yPos][xPos]<13)){ // dla bialych i czarnych - bicie
        if(x<xPos && y<yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                xPos--;
                yPos--;
            }
            return taking;
        }
        else if(x>xPos && y<yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                xPos++;
                yPos--;
            }
            return taking;
        }
        else if(x<xPos && y>yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                xPos--;
                yPos++;
            }
            return taking;
        }
        else if(x>xPos && y>yPos){
            while(x!=xPos && yPos!=y){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                xPos++;
                yPos++;
            }
            return taking;
        }
    }

    return badMove;
}