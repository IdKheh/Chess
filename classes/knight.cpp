#include "chess.hpp" //koń
#define n 8
#define taking 2

int Knight::move(int board[8][8],int xPos, int yPos) {
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return 0;

    if(board[xPos][xPos]==0 && x==xPos+2 && y==yPos+1) return 1;
    else if(board[xPos][xPos]==0 && x==xPos-2 && y==yPos+1) return 1;
    else if(board[xPos][xPos]==0 && x==xPos+2 && y==yPos-1) return 1;
    else if(board[xPos][xPos]==0 && x==xPos-2 && y==yPos-1) return 1;

    else if(board[xPos][xPos]==0 && x==xPos+1 && y==yPos+2) return 1;
    else if(board[xPos][xPos]==0 && x==xPos-1 && y==yPos+2) return 1;
    else if(board[xPos][xPos]==0 && x==xPos+1 && y==yPos-2) return 1;
    else if(board[xPos][xPos]==0 && x==xPos-1 && y==yPos-2) return 1;

    else if(0<board[xPos][xPos]<=6 && color){
        if(x==xPos+2 && y==yPos+1) return taking;
        if(x==xPos-2 && y==yPos+1) return taking;
        else if(x==xPos+2 && y==yPos-1) return taking;
        else if(x==xPos-2 && y==yPos-1) return taking;

        else if(x==xPos+1 && y==yPos+2) return taking;
        else if(x==xPos-1 && y==yPos+2) return taking;
        else if(x==xPos+1 && y==yPos-2) return taking;
        else if(x==xPos-1 && y==yPos-2) return taking;
    }
    else if(6<board[xPos][xPos]<=12 && !(color)){
        if(x==xPos+2 && y==yPos+1) return taking;
        if(x==xPos-2 && y==yPos+1) return taking;
        else if(x==xPos+2 && y==yPos-1) return taking;
        else if(x==xPos-2 && y==yPos-1) return taking;

        else if(x==xPos+1 && y==yPos+2) return taking;
        else if(x==xPos-1 && y==yPos+2) return taking;
        else if(x==xPos+1 && y==yPos-2) return taking;
        else if(x==xPos-1 && y==yPos-2) return taking;
    }
    else return 0;
}
