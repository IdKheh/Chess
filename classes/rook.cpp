#include "chess.hpp" //wieza
#define n 8
#define roszada 4;
#define taking 2
#define moving 1
#define badMove 0

int Rook::move(int board[8][8],int xPos, int yPos) {
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return badMove;

    if(board[yPos][xPos]==0){
        if(x==xPos && y>yPos){
            while(yPos!=y){
                if(yPos<0 || board[yPos][xPos]!=0 || yPos>n) return badMove;
                yPos++;
            }
            moved=true;
            return moving;
        }
        else if(x==xPos && y<yPos){
            while(yPos!=y){
                if(yPos<0 || board[yPos][xPos]!=0 || yPos>n) return badMove;
                yPos--;
            }
            moved=true;
            return moving;
        }
        else if(x>xPos && y==yPos){
            while(xPos!=x){
                if(xPos<0 || board[yPos][xPos]!=0 || xPos>n) return badMove;
                xPos--;
            }
            moved=true;
            return moving;
        }
        else if(x<xPos && y==yPos){
            while(xPos!=x){
                if(xPos<0 || board[yPos][xPos]!=0 || xPos>n) return badMove;
                xPos++;
            }
            moved=true;
            return moving;
        }
    }
    else if((color && 0<board[yPos][xPos]<7)||(!(color) && 6<board[yPos][xPos]<13)){
        if(x==xPos && y>yPos){
            while(yPos!=y){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                yPos++;
            }
            moved=true;
            return taking;
        }
        else if(x==xPos && y<yPos){
            while(yPos!=y){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                yPos--;
            }
            moved=true;
            return taking;
        }
        else if(x>xPos && y==yPos){
            while(xPos!=x){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                xPos--;
            }
            moved=true;
            return taking;
        }
        else if(x<xPos && y==yPos){
            while(xPos!=x){
                if(xPos<0 || yPos<0 || (board[yPos][xPos]>6 && color) || (0<board[yPos][xPos]<7 && !(color)) || xPos >n || yPos>n) return badMove;
                xPos++;
            }
            moved=true;
            return taking;
        }
    }


    return badMove;
}