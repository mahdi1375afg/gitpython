#include <cassert>
#include <string>
#include "City.h"
#include "Position.h"
#include <iostream>

namespace MahdiHfu{
MahdiHfu::Position createPosition() {
    std::cout << "position test started" << std::endl;
    std::string mordor = "Mordor";
    MahdiHfu::Position result(mordor, 47, 11);
    std::cout << "position test passed" << std::endl;
    return result;
}

MahdiHfu::City createCity(){
    std::cout<<"city test started"<<std::endl;
    auto position=createPosition();
    std::string pois[]={"Sauron", "Minas Morgul", "Orodruin"};
    MahdiHfu::City result(position, pois, 3);
    std::cout<<"city test passed"<<std::endl;
    return result;
}

void testCtor(){
    std::cout<<"Ctor test started"<<std::endl;
    auto position=createPosition();
    std::string pois[]={"Sauron", "Minas Morgul", "Orodruin"};
    MahdiHfu::City city(position,pois,3);
    pois[0]="Gandalf";
    assert(city.getpoi(0)=="Sauron");
    std::cout<<"Ctor test passed"<<std::endl;
}

void testGetNameXY(){
    std::cout<<"GetNameXY test started"<<std::endl;
    auto position=createPosition();
    MahdiHfu::City city(position, nullptr,0);
    assert(city.getName()=="Mordor");
    assert(city.getX()==47);
    assert(city.getY()==11);
    std::cout<<"GetNameXY test passed"<<std::endl;
}


void testGetpoi(){
    std::cout<< "Getpoi test started" << std::endl;
    auto city=createCity();
    assert(city.getpoi(0)=="Sauron");
    assert(city.getpoi(1)=="Minas Morgul");
    assert(city.getpoi(2)=="Orodruin");
    try {
        city.getpoi(3);
        assert(false);
    }catch (...){}
    try {
        city.getpoi(-1);
        assert(false);
    }catch (...){}
    std::cout<< "Getpoi test passed" << std::endl;
}

void testSetpoi(){
    std::cout<< "Setpoi test started" << std::endl;
    auto city=createCity();
    city.setpoi(0,"Gandalf");
    assert(city.getpoi(0)=="Gandalf");

    try {
        city.setpoi(3,"Gandalf");
        assert(false);
    }catch (...){}
    try {
        city.setpoi(-1,"Gandalf");
        assert(false);
    }catch (...){}
    std::cout<< "Setpoi test passed" << std::endl;
}

void testGetNumberOfpois(){
    std::cout<< "GetNumberOfpois test started" << std::endl;
    auto city=createCity();
    assert(city.getNumberOfpois()==3);
    std::cout<< "GetNumberOfpois test passed" << std::endl;
}


void testCity() {
    testCtor();
    testGetNameXY();
    testGetpoi();
    testSetpoi();
    testGetNumberOfpois();
}
}
int main (){
    std::cout<< "All test started" << std::endl;
    MahdiHfu::testCity();
    std::cout<< "All test passed" << std::endl;
}//
