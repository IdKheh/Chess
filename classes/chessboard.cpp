#include <iostream>
#include <memory>
#include "chessboard.hpp"
#define n 8

ChessBoard::ChessBoard(){
    int color = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                if(j==0 || j==n-1){ //wieża czarna
                    board[i][j]=1;
                    black.push_back(std::make_unique<Rook>(j,i,board[i][j],color));
                }
                else if(j==1 || j==n-2){  //koń czarny
                    board[i][j]=2;
                    black.push_back(std::make_unique<Knight>(j,i,board[i][j],color));
                }
                else if(j==2 || j==n-3){  //goniec czarny
                    board[i][j]=3;
                    black.push_back(std::make_unique<Bishop>(j,i,board[i][j],color));
                }
                else if(i<2 && j==3){  //król czarny
                    board[i][j]=4;
                    black.push_back(std::make_unique<King>(j,i,board[i][j],color));
                }
                else if(i<2 && j==4){  //królowa czarna
                    board[i][j]=5;
                    black.push_back(std::make_unique<Queen>(j,i,board[i][j],color));
                }
            }
            else if(i==1){ //pion czarny
                board[i][j]=6;
                black.push_back(std::make_unique<Pawn>(j,i,board[i][j],color));
            }
            else if(i==n-2){ //pion bialy
                color = 1;
                board[i][j]=7;
                white.push_back(std::make_unique<Pawn>(j,i,board[i][j],color));
            }
            else if(i==n-1){
                if(j==0 || j==n-1){ //wieża biala
                    board[i][j]=8;
                    white.push_back(std::make_unique<Rook>(j,i,board[i][j],color));
                }
                else if(j==1 || j==n-2){  //koń bialy
                    board[i][j]=9;
                    white.push_back(std::make_unique<Knight>(j,i,board[i][j],color));
                }
                else if(j==2 || j==n-3){  //goniec bialy
                    board[i][j]=10;
                    white.push_back(std::make_unique<Bishop>(j,i,board[i][j],color));
                }
                else if(j==3){  //król bialy
                    board[i][j]=11;
                    white.push_back(std::make_unique<King>(j,i,board[i][j],color));
                }
                else if(j==4){  //królowa biala
                    board[i][j]=12;
                    white.push_back(std::make_unique<Queen>(j,i,board[i][j],color));
                }
            }
            else board[i][j]=0;
        }
    }
}

ChessBoard::~ChessBoard(){
    black.clear();
    white.clear();
}

void ChessBoard::print(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            std::cout<<board[i][j]<<" | ";
        std::cout<<std::endl;
    }
}

void ChessBoard::move(int x, int y, int xPos, int yPos, int value){
    board[y][x]=0;
    board[yPos][xPos]=value;
}
void ChessBoard::taking(int x, int y,int xPos, int yPos, int value){
    move(x,y,xPos,yPos,value);
}