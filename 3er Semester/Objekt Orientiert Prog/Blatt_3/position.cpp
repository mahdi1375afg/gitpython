//
// Created by mahdi on 19.10.2024.
#include <assert.h>
#include <iostream>
#include "position.h"
namespace nsPosition
{
    nsPosition::position::position(const std::string &name,const int x ,const int y ):x(x), y (y), name (name){
    }
    const std::string& position::getName() const
    {
        return name;
    }
    int position::getX()const
    {
        return x;
    }
    int position::getY() const
    {
        return y;
    }

    int position::compare (const position& other)const{
        if (this->name == other.name && this->x == other.x && this->y == other.y) {
            return 0;
        }
        if (this->name < other.name || (this->name == other.name && (this->x < other.x || (this->x == other.x && this->y < other.y)))) {
            return -1;
        }
        return 1;
    }


}

