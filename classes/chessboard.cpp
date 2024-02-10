#include "chessboard.hpp"
#include <iostream>
#define n 8

ChessBoard::ChessBoard(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                if(j==0 || j==n-1) board[i][j]=1; //wieża czarna
                else if(j==1 || j==n-2) board[i][j]=2; //koń czarna
                else if(j==2 || j==n-3) board[i][j]=3; //goniec czarna
                else if(i<2 && j==3) board[i][j]=4; //król czarna
                else if(i<2 && j==4) board[i][j]=5; //królowa czarna
            }
            else if(i==1) board[i][j]=6; //pion czarny
            else if(i==n-2) board[i][j]=7;
            else if(i==n-1){
                if(j==0 || j==n-1) board[i][j]=7; //wieża biala
                else if(j==1 || j==n-2) board[i][j]=8; //koń biala
                else if(j==2 || j==n-3) board[i][j]=9; //goniec biala
                else if(j==3) board[i][j]=10; //król biala
                else if(j==4) board[i][j]=11; //królowa biala
            }
            else board[i][j]=0;
        }
    }
}

void ChessBoard::print(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            std::cout<<board[i][j]<<" | ";
        std::cout<<std::endl;
    }
}

void ChessBoard::setUp(){
    // TODO: zaimportować biblioteki i pionkom odpowiednie pozycje
}

void ChessBoard::move(int x, int y, int xPos, int yPos, int value){
    board[x][y]=0;
    board[x][y]=value;
}
void ChessBoard::taking(int x, int y){
    board[x][y]=0;
}