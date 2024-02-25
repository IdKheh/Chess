#include <iostream>

class Player {
private:
    std::string name;
    int color;
public:
    Player(std::string n,int c){
        name =n;
        color=c;
    };
    std::string getName(){
        return name;
    }
};