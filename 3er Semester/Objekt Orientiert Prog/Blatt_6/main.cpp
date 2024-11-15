#include <iostream>
#include <cassert>
#include "City.h"
#include "Position.h"
namespace MahdiHfu {
    void test1() {
        std::cout<<"test1 started"<<std::endl;
        City city("Mordor", 47, 11, nullptr, 0);
        assert(city.getNumberOfPOIs()==0);

        try {
            City city("Mordor", 47, 11, nullptr, 23);
            assert(false);
        } catch (...) {}

        City empty("Mordor", 47, 11);
        std::cout<<"test1 finished"<<std::endl;
        assert(empty.getNumberOfPOIs()==0);

    }

    void testAdd() {
        std::cout<<"testAdd started"<<std::endl;
        std::string pois[]={"Sauron", "Minas Morgul"};
        City city("Mordor", 47, 11,pois,2);
        city.add("Orodruin");
        assert(city.getNumberOfPOIs()==3);
        assert(city.getpoi(2)=="Orodruin");
        City empty("Mordor", 47, 11);
        empty.add("Orodruin");
        assert(empty.getNumberOfPOIs()==1);
        assert(empty.getpoi(0)=="Orodruin");
        std::cout<<"testAdd finished"<<std::endl;
    }
    void testRemove() {
        std::cout<<"testRemove started"<<std::endl;
        std::string pois[]={"Sauron", "Minas Morgul", "Orodruin"};
        City city("Mordor", 47, 11, pois, 3);
        City copy1=city;
        assert(true==copy1.remove("Orodruin"));
        assert(copy1.getNumberOfPOIs()==2);
        assert(false== copy1.remove("Shire"));
        City copy2=city;
        assert(true==copy2.remove("Sauron"));
        assert(copy2.getNumberOfPOIs()==2);
        assert(copy2.getpoi(0)=="Minas Morgul");
        std::string saurons[]={"Sauron","Sauron","Sauron"};
        City same("Mordor", 47, 11, saurons, 3);
        assert(true==same.remove("Sauron"));
        assert(same.getNumberOfPOIs()==0);
        std::cout<<"testRemove finished"<<std::endl;
    }
}
int main()
{
    MahdiHfu::test1();
    MahdiHfu::testAdd();
    MahdiHfu::testRemove();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
