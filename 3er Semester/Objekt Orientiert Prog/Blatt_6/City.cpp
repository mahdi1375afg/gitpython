//
// Created by mahdi on 03.11.2024.
//
#include"Position.h"
#include "City.h"
#include <iostream>
namespace MahdiHfu {
    City::City(const Position &position,const std::string *pois,const int length):
    position(position),pois(copyPoi(pois,length)) ,length(length) {
    }


    City::City(const std::string &name, const int x, const int y, const std::string *pois, const int length)
        : City(Position(name, x, y), pois, length) {
        if (pois == nullptr && length != 0) {
            throw std::invalid_argument("POIs array is null but length is non-zero");
        }
        std::cout << "im old ctor" << std::endl;
    }

    City::City(const City &other): City(other.getName(), other.getX(), other.getY(), other.pois,
        other.getNumberOfPOIs()) {
        std::cout<< "!!!!im new cctor"<<std::endl;
    }

    //new ctor
    City::City(const std::string& name,const int x,const int y):City(name,x,y,nullptr,0){};


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
        if(i < 0 || i >= getNumberOfPOIs()) {
            throw std::out_of_range("Index out of range");
        }
        return this->pois[i];
        };
    bool City::setpoi(const int i, std::string poi) {
        if(i < 0 || i >= getNumberOfPOIs()) {
            throw std::out_of_range("Index out of range");
        }
        this->pois[i] = poi;
        return true;

    }
    int City::getNumberOfPOIs()const{

        return length;
    }
    //Aufgabe 2 Blatt_6

    void City::add(const std::string& poi) {
        std::string *new_pois = new std::string [length+1];
        for (int i = 0; i < length;++i) {
            new_pois[i]= pois[i];
        }
        new_pois[length]= poi;
        delete[] pois;
        pois = new_pois;
        length++;
    }
    bool City::remove(const std::string &poi) {
        int count = 0;
        for (int i = 0; i < length; ++i) {
            if (pois[i] == poi) {
                count++;
            }
        }
        if (count == 0) {
            return false;
        }

        std::string *new_pois = new std::string[length - count];
        int new_index = 0;
        for (int i = 0; i < length; ++i) {
            if (pois[i] != poi) {
                new_pois[new_index++] = pois[i];
            }
        }
        delete[] pois;
        pois = new_pois;
        length -= count;
        return true;
    }



    }

// variable names immer kleine Buchstaben
//ruckgabe objecte nach Möglichkeit const und referenz
