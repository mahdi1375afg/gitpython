#include <iostream>
#include <assert.h>
#include "position.h"
namespace nsPosition {
    void sort(int* numbers, int const size){
        for (int i = 1; i < size; ++i) {
            int key = numbers[i];
            int j = i - 1;
            while (j >= 0 && numbers[j] > key) {
                numbers[j + 1] = numbers[j];
                j = j - 1;
            }
            numbers[j + 1] = key;
        }
    }

    void test_sort(int* numbers, int const size) {
        sort(numbers, size);

        std::cout << "test started" << std::endl;
        for (int i = 0 ; i< size-1; i++)
        {
            assert(numbers[i] <= numbers[i + 1]);
        }
        std::cout << "test passed" << std::endl;
    }
    void test_sort() {
        int numbers1 [] = {3, 2, 1, 5, 4,9,99,70};
        int numbers2 [] = {19,1,12,3,20,10};
        int numbers3 [] = {36,87,93,50,22,63};
        int numbers4 [] = {5,4,3,2,1,0,12,11};
        test_sort(numbers1, 8);
        test_sort(numbers2, 6);
        test_sort(numbers3, 6);
        test_sort(numbers4, 8);

    }
    void test_compare() {
        std::cout << "compare test started" << std::endl;
        std::string mordor = "Mordor";
        position position(mordor, 47, 11);
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
    int main() {
        int number []= {3,2,1,3,4,1};
        nsPosition::test_sort(number, 6);
        nsPosition::test_sort();
       nsPosition::position::testPosition();
        nsPosition::test_compare();

        return 0;
    }
