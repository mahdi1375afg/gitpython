//
// Created by mahdi on 03.11.2024.
//

#ifndef CITY_H
#define CITY_H
#include <string>
#include "Position.h"
namespace MahdiHfu {

class City {
private:
    std::string *poi;
    Position position;
    int size;
    static std::string *copypoi(const std::string *copypoi, const int size) {
        const auto result = new std::string[size];
        for (int i = 0; i < size; ++i) {
            result[i] = copypoi[i];
        }
        return result;
    }


public:
    City(const Position &position,const std::string *poi,int size);

    const std::string& getName()const;
    int getX()const;
    int getY()const;
    const std::string& getpoi(int i)const;
    bool setpoi(int i, std::string poi)const;
    int getNumberOfpois()const;

};

} // MahdiHfu

#endif //CITY_H
