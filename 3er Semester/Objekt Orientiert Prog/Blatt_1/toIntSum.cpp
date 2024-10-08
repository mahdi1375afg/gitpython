#include <iostream>
int s;// golobal variable

int toIntSum (const int k) {
    const int s = k;
    return s;
}
void spiltDigit (int nummber, int *array) {
    int size = 0;
    int nrTemp = nummber;
    while (nrTemp > 0){
        nrTemp /= 10;
        size ++;
    }
    for (int i = size -1 ; i >= 0; i++) {
        array[i] = nummber % 10;
        nummber /= 10;
    }
}

int sum (int z) {
    int sum = 0;
    for (int i = 0; i <= s; i++){
        if(i % 2 == 0){

        }




}



int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
