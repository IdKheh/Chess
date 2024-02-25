#include "chess.hpp" //kon
#define n 8
#define taking 2
#define moving 1
#define badMove 0

int Knight::move(int board[8][8],int xPos, int yPos) {
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return badMove;

    if(board[xPos][xPos]==0 && x==xPos+2 && y==yPos+1) return moving;
    else if(board[xPos][xPos]==0 && x==xPos-2 && y==yPos+1) return moving;
    else if(board[xPos][xPos]==0 && x==xPos+2 && y==yPos-1) return moving;
    else if(board[xPos][xPos]==0 && x==xPos-2 && y==yPos-1) return moving;

    else if(board[xPos][xPos]==0 && x==xPos+1 && y==yPos+2) return moving;
    else if(board[xPos][xPos]==0 && x==xPos-1 && y==yPos+2) return moving;
    else if(board[xPos][xPos]==0 && x==xPos+1 && y==yPos-2) return moving;
    else if(board[xPos][xPos]==0 && x==xPos-1 && y==yPos-2) return moving;

    else if((0<board[xPos][xPos]<=6 && color)||(6<board[xPos][xPos]<=12 && !(color))){
        if(x==xPos+2 && y==yPos+1) return taking;
        else if(x==xPos-2 && y==yPos+1) return taking;
        else if(x==xPos+2 && y==yPos-1) return taking;
        else if(x==xPos-2 && y==yPos-1) return taking;

        else if(x==xPos+1 && y==yPos+2) return taking;
        else if(x==xPos-1 && y==yPos+2) return taking;
        else if(x==xPos+1 && y==yPos-2) return taking;
        else if(x==xPos-1 && y==yPos-2) return taking;
    }
       
    return badMove;
}
