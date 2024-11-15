//
// Created by mahdi on 19.10.2024.
#include <assert.h>
#include <iostream>
#include "Position.h"
namespace MahdiHfu
{
    MahdiHfu::Position::Position(const std::string &name,const int x ,const int y ):x(x), y (y), name (name){
    }
    const std::string& Position::getName() const
    {
        return name;
    }
    int Position::getX()const
    {
        return x;
    }
    int Position::getY() const
    {
        return y;
    }

    int Position::compare (const Position& other)const{
        if (this->name == other.name && this->x == other.x && this->y == other.y) {
            return 0;
        }
        if (this->name < other.name || (this->name == other.name && (this->x < other.x || (this->x == other.x && this->y < other.y)))) {
            return -1;
        }
        return 1;
    }


}

