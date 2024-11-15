
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
    Position position;
    std::string *copyPoi(const std::string *pois, int length) {
        if (pois == nullptr || length == 0) return nullptr;
        std::string *new_pois = new std::string[length];
        std::copy(pois, pois + length, new_pois);
        return new_pois;
    }
    City(const Position &position,const std::string *poi,int length);


public:
    City(const std::string& name,int x, int y,const std::string *pois, int length);
    ~City();

    City(const City &other);
    City(const std::string& name,int x, int y);
    const std::string& getName()const;
    int getX()const;
    int getY()const;
    const std::string& getpoi(int i)const;
    bool setpoi(int i, std::string poi);
    int getNumberOfPOIs()const;

    void add(const std::string& poi);
    bool remove(const std::string &poi);

};

} // MahdiHfu

#endif //CITY_H
