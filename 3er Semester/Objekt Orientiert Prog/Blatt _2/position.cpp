//
// Created by mahdi on 19.10.2024.

#include "position.h"
namespace ns1
{
    void position::set(const std::string &name,int x , int y ){
        this-> name = name;
        this-> x = x;
        this->y = y;
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
}

