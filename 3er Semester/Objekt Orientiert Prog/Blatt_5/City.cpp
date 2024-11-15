//
// Created by mahdi on 03.11.2024.
//
#include"Position.h"
#include "City.h"
#include <iostream>
namespace MahdiHfu {
    City::City(const Position &position,const std::string *pois,const int length):
    position(position),pois(copypoi(pois,length)) ,length(length) {
    }

    City::City(const std::string& name,const int x,const int y,const std::string *pois,const int length):
    City(Position(name,x,y),pois,length) {std::cout<< "??????im old ctor"<<std::endl;
    }

    City::City(const City &other): City(other.getName(), other.getX(), other.getY(), other.pois,
        other.getNumberOfpois()) {
        std::cout<< "!!!!im new cctor"<<std::endl;
    }


    //disstruktor
    City::~City() {
        std::cout<< "im dctor"<<std::endl;
        delete[] pois;
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
        return this->pois[i];
        };
    bool City::setpoi(const int i, std::string poi) {
        if(i < 0 || i >= getNumberOfpois()) {
            throw std::out_of_range("Index out of range");
        }
        this->pois[i] = poi;
        return true;

    }
    int City::getNumberOfpois()const{

        return length;
    }
    }
// variable names immer kleine Buchstaben
//ruckgabe objecte nach Möglichkeit const und referenz
