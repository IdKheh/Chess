#include <iostream>
#include "classes/chessboard.hpp"
#include "classes/player.hpp"

int main(int argc, char const *argv[])
{
    Player p1("gracz 1",0);
    Player p2("gracz 2",1);

    ChessBoard board;
    board.print();
    std::cout<<"\n\n\n";
    int xPos=3,yPos=3, i=11;


    if(board.black[i]->move(board.board,xPos,yPos)==1){

        board.move(board.black[i]->getX(),board.black[i]->getY(),xPos,yPos,board.black[i]->getValue());
        board.black[i]->setX(xPos);
        board.black[i]->setY(yPos);
        std::cout<<"poprawny ruch"<<std::endl;
    }
    else std::cout<<"niepoprawny ruch "<<std::endl<<std::endl<<std::endl;

    i=3;
    xPos=3;
    yPos=1;

    if(board.black[i]->move(board.board,xPos,yPos)==1){

        board.move(board.black[i]->getX(),board.black[i]->getY(),xPos,yPos,board.black[i]->getValue());
        board.black[i]->setX(xPos);
        board.black[i]->setY(yPos);
        std::cout<<"poprawny ruch"<<std::endl;
    }
    else std::cout<<"niepoprawny ruch "<<std::endl<<std::endl<<std::endl;

    board.print();

    std::cout<<"x: "<<board.black[i]->getX()<<" y: "<<board.black[i]->getY()<<" color: "<<board.black[i]->getColor()<<std::endl;

    return 0;
}
