#include <iostream>
#include <assert.h>
#include "position.h"
namespace ns1
{
    int toInt(const char c, int &theInt) {
        if(c >= '0' && c <= '9') {
            theInt = c - '0';
            return theInt;
        }
        else{
            return -1;
        }
    }

    int decode(const std::string &line) {
        int firstZ = -1;
        int lastZ = -1;
        int tempDigit;
        for (const char c: line) {
            //char c = line[i];
            if (toInt(c, tempDigit)!=-1) {
                if (firstZ == -1) {
                    firstZ = tempDigit;
                }
                lastZ = tempDigit;
            }
        }

        if (firstZ == -1) {
            throw std::invalid_argument("keine Ziffern gefunden");
        }
        else {
            return firstZ * 10 + lastZ;
        }
    }

    void testtoInt() {
        std::cout<<"Test toInt"<<std::endl;
        int number = -1;
        toInt('0', number);
        assert(number == 0);

        number = -1;
        toInt('9', number);
        assert(number == 9);

        number = -1;
        toInt('x', number);
        assert(number == -1);

        std::cout<<"Test toInt erfolgreich"<<std::endl;
    }

    void testDecode() {
        std::cout<<"Test Decode"<<std::endl;
        std::string lines[] = {
            "1abc2",
            "pqr3stu8vwx",
            "a1b2c3d4e5f",
            "treb7uchet"
            };
        int expected[]{12,38,15,77};
        for (int i = 0; i < 4; ++i) {
            assert(decode(lines[i])==expected[i]);
        }
        try {
            decode("no digit");
            assert(false);
        }
        catch (std::invalid_argument&) {
            assert(true);
        }
        std::cout << "Test Decode erfolgreich" << std::endl;
    }
}
    int main()
    {
        ns1::position Mordor;
        Mordor.set("Morder", 3, 4);
        std::cout << Mordor.getX() <<std::endl;
        std::cout << Mordor.getY() << std::endl;
        std::cout << Mordor.getName() << std::endl;
        ns1::testtoInt();
        ns1::testDecode();

        return 0;
    }
