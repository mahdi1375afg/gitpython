#include <iostream>
#include <assert.h>



class Number
{
private:
    int number;    //  Die Zahl, die verarbeitet wir
    int digits[10]; // Array zum Speichern der Ziffern
    int size;       // Anzahl der Ziffern

    int abc(int numb) {
        if (numb < 0) {
            return -numb;
        }
        return numb;
    }


    void splitDigits() {
        int temp = abc(number);
        size = 0;


        if (temp == 0) {
            digits[0] = 0;
            size = 1;
            return;
        }

        // Ziffern zählen
        while (temp > 0) {
            temp /= 10;
            size++;
        }


        temp = abc(number);
        for (int i = size - 1; i >= 0; i--) {
            digits[i] = temp % 10;
            temp /= 10;
        }
    }

public:
    // Konstruktor der Klasse
    Number(int n) {
        number = n;
        splitDigits();  // Ziffern beim Erstellen des Objekts sofort aufteilen
    }
    //Aufgabe 2
    bool toInt(char c, int *theInt) {
        if( c >= '0' &&  c <= '9') {
            *theInt = c - '0';
            return true;
        }
        return false;
    }
    int decode (const char *line) {
        int firstZ =-1;
        int secondZ = -1;
        for (const char* ptr = line;*ptr != '\0';ptr++) {
            int tempZ;
            if (toInt(*ptr,&tempZ) == true) {
                if(firstZ == -1) {
                    firstZ = tempZ;
                }else {
                    secondZ = tempZ;
                }
            }
        }
        if(firstZ == -1 ) {
            throw std::runtime_error("keine Ziffern gefunden");
        }
        else if(secondZ == -1) {
            return firstZ;

        }else {
            return firstZ *10 + secondZ;
        }
    }

    int alternatingDigitSum() {
        int sum = 0;
        // negative exception
        if(number < 0) {
            throw std::runtime_error("Number is negative");
        }

        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                sum += digits[i];
            } else {
                sum -= digits[i];
            }
        }
        return sum;

    }


    void printDigits() {

        for (int i = 0; i < size; i++) {
            std::cout << digits[i] << " ";
        }
        std::cout << std::endl;
    }

    // Testfunktion für die Klasse Number
    void testNumberClass() {
        Number num1(12345);
        num1.printDigits();  // Ziffern ausgeben

        Number num2(-12345);
        try {
            std::cout << "Alternierende Ziffernsumme von -12345: " << num2.alternatingDigitSum() << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Caught an exception: " << e.what() << std::endl;
        }

        Number num3(0);
        std::cout << "Alternierende Ziffernsumme von 0: " << num3.alternatingDigitSum() << std::endl;
    }

    void testSplitDigits() {
        std::cout << "Running tests for splitDigits" << std::endl;
        Number num(12345);
        assert(num.size == 5);
        assert(num.digits[0] == 1);
        assert(num.digits[1] == 2);
        assert(num.digits[2] == 3);
        assert(num.digits[3] == 4);
        assert(num.digits[4] == 5);
        std::cout << "All tests passed" << std::endl;
    }

    void testAlternatingDigitSum() {
        std::cout << "Running tests for alternatingDigitSum" << std::endl;

        try {
            Number numNe(-123);
            numNe.alternatingDigitSum();
            assert(false); // This should not be reached
        } catch (const std::runtime_error& e) {
            assert(std::string(e.what()) == "Number is negative");
        }

        Number num1(12345);
        assert(num1.alternatingDigitSum() == 3);

        Number num2(123456);
        assert(num2.alternatingDigitSum() == -3);

        Number num3(1234567);
        assert(num3.alternatingDigitSum() == 4);

        Number num4(12345678);
        assert(num4.alternatingDigitSum() == -4);

        Number num5(123456789);
        assert(num5.alternatingDigitSum() == 5);

        std::cout << "All tests passed" << std::endl;
    }
    void testDecode() {
        std::cout << "Running test for decode" << std::endl;
        Number numb (12345);
        assert(numb.decode ("1xyz2") == 12);
        assert(numb.decode ("abc3pqr8ijk") == 38);
        assert(numb.decode ("x1y2z3v4w5q") == 15);
        assert(numb.decode ("hello7world") == 7);
        try {
            numb.decode("mahdi");
            assert(false);
        }catch(std::runtime_error& e){
            assert(std::string(e.what()) == "keine Ziffern gefunden");
        }
        std::cout << "All test for decode passed" << std::endl;

    }
};

int main() {
    Number num(12345);
    num.testSplitDigits();
    num.testAlternatingDigitSum();

    int number = 1234;
    std::cout << "The alternating digit sum of " << number << " is " << Number(number).alternatingDigitSum() << std::endl;
    //aufgabe 2
    char c = '1';
    int theInt;
    std::cout <<"Aufgabe 2" <<"  "<< num.toInt(c, &theInt) <<  std::endl;
    std::cout << "The integer value of theInt" << " is " << theInt << std::endl;
    //Aufgab 2.2
     const char* line = "hello7world";
    std::cout<<"Aufgabe 2.2 "<< num.decode(line)<< std::endl;
    num.testDecode();

    return 0;
}