//
// Created by mahdi on 03.11.2024.
//

#include "City.h"
#include <iostream>
namespace MahdiHfu {
    City::City(const Position &position,const std::string *poi,const int size): position(position),poi(copypoi(poi,size)) ,size(size) {
    }
    int City::getX()const{
        return position.getX();
    }
    int City::getY()const {
        return position.getY();
    }
    const std::string& City::getName()const {
        return position.getName();
    }
    const std::string& City::getpoi(const int i)const{
        if(i < 0 || i >= getNumberOfpois()) {
            throw std::out_of_range("Index out of range");
        }
        return this->poi[i];
        };
    bool City::setpoi(const int i, std::string poi)const {
        if(i < 0 || i >= getNumberOfpois()) {
            throw std::out_of_range("Index out of range");
        }
        this->poi[i] = poi;
        return true;

    }
    int City::getNumberOfpois()const{

        return size;
    }
    }
// variable names immer kleine Buchstaben
//ruckgabe objecte nach Möglichkeit const und referenz
