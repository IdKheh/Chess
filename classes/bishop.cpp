//goniec
#include "chess.hpp" //król
#include <iostream>
#define n 8
#define taking 2

int Bishop::move(int board[8][8],int xPos, int yPos){
    if(xPos >n || xPos<0 || yPos<0 || yPos >n) return 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<i;
        }

    }


    if(color && 0<board[xPos][yPos]<=6 ) return taking; // dla bialych
    if(!(color) && 6<board[xPos][yPos]<12) return taking; // dla czarnych

    else return 0;
}