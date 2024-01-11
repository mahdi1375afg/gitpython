#include "SafeArray.h"
#include <iostream>

int main() {
  SafeArray sarr(rand() % 100);
//  sarr.setAt(5, 10);
//  sarr.getAt(-2);
  sarr.print();
}