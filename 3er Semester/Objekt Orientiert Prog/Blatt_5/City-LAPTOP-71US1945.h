
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
    std::string *pois;
    int length;
    static std::string *copypoi(const std::string *copypoi, const int size) {
        const auto result = new std::string[size];
        for (int i = 0; i < size; ++i) {
            result[i] = copypoi[i];
        }
        return result;
    }
    City(const Position &position,const std::string *poi,int length);


public:
    City(const std::string& name,const int x,const int y,const std::string *pois,const int length);
    ~City();

    City(const City &other);
    const std::string& getName()const;
    int getX()const;
    int getY()const;
    const std::string& getpoi(int i)const;
    bool setpoi(int i, std::string poi);
    int getNumberOfpois()const;

};

} // MahdiHfu

#endif //CITY_H
