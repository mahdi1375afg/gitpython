//
// Created by mahdi on 29.10.2024.

#include <iostream>
#include <assert.h>

#include "position.h"

namespace nsPosition
{
    void sort(position* positions, int const size) {
        for (int i = 1; i < size; ++i) {
            position key = positions[i];
            int j = i - 1;
            while (j >= 0 && positions[j].compare(key) > 0) {
                positions[j + 1] = positions[j];
                j = j - 1;
            }
            positions[j + 1] = key;
        }
    }
    void test_sort(position* positions, int const size) {
        sort(positions, size);

        std::cout << "Sort_test started" << std::endl;
        for (int i = 0; i < size - 1; i++) {
            assert(positions[i].compare(positions[i + 1]) <= 0);
        }
        std::cout << "Sort_test passed" << std::endl;
    }

    void test_sort()
    {
        position positions1[] = {position("C", 3, 2), position("A", 1, 5), position("B", 2, 4)};
        position positions2[] = {position("D", 19, 1), position("B", 12, 3), position("A", 20, 10)};
        test_sort(positions1, 3);
        test_sort(positions2, 3);
    }
    void test_compare() {
        std::cout << "compare test started" << std::endl;
        std::string mordor = "Mordor";
        nsPosition::position position(mordor, 47, 11);
        assert(position.compare(position)==0);
        nsPosition::position const position_name("zordor", 47, 11);
        nsPosition::position const position_x(mordor, 48, 11);
        nsPosition::position const position_y(mordor, 47, 12);
        assert(position.compare(position_name)<0);
        assert(position.compare(position_x)<0);
        assert(position.compare(position_y)<0);
        assert(position_name.compare(position)>0);
        assert(position_x.compare(position)>0);
        assert(position_y.compare(position)>0);
        std::cout << "compare test passes" << std::endl;
    }
    void position::testPosition() {
        std::cout<<"position test started"<<std::endl;
        std::string mordor = "Mordor";
        nsPosition::position position(mordor, 47, 11);
        assert(position.getName() == mordor);
        assert(position.getX() == 47);
        assert(position.getY() == 11);
        // Objekt manipulation pruefen, dass mit konstruktur format von Vorlersung nicht moeglich ist
        mordor[0]='X';
        assert(position.getName() == "Mordor");
        std::cout<<"position test passed"<<std::endl;
    }
}
int main()
{
    nsPosition::position::testPosition();
    nsPosition::test_compare();
    nsPosition::test_sort();
    return 0;
}