#include "safearray.hpp"
#include <iostream>

   
       safearray::~safearray() {
        delete[] a; 
    }
       safearray::safearray(int value) {
        size = 10;
        a = new int [size];
        for (int i = 0; i < 100; ++i) {
            a[i] = value;
        } 
    }


   
    bool safearray::setat(unsigned int pos, int val){
    if (a == nullptr) {

            a = new int[pos + 1];
            size = pos + 1;


            for (int i = 0; i < size; ++i) {
                a[i] = val;
            }
        } else if (pos >= size) {

            int newSize = pos + 1;
            int* newArray = new int[newSize];


            for (int i = 0; i < size; ++i) {
                newArray[i] = a[i];
            }


            for (int i = size; i < newSize; ++i) {
                newArray[i] = val;
            }


            size = newSize;
            delete[] a;
            a = newArray;
        }

        a[pos] = val;
        return true;
    }

  
    int safearray::getat(unsigned int pos){
 if (a == nullptr || pos >= size) {
            
            return 0;
        } else {
            return a[pos];
        }
    }


    int length(){
        return size;
    }
    int safearray::getminimum(){
            int m = a[0]; 
        for (int i=1;i < 100;i++){
       
            if(a[i] < m){
            m = a[i];
            }
        }
        return m;
    }


     bool safearray::fill (unsigned int pos1, unsigned int pos2, int value){
        if (pos1 <= pos2 && pos2 < 100) {
            for (unsigned int i = pos1; i <= pos2; ++i) {
                a[i] = value;
            }
            return true;
        } else {
            return false;
        }
    }

