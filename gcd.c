#include "gcd.h"

// Функция возвращает НОД двух целых чисел (по методу Евклида)
int getGCD(int val1, int val2) {
    while (val1 != val2 ) {
        if (val1 > val2)
            val1 -= val2;
        else
            val2 -= val1;
    }
    return val1;
}

// Функция возвращает НОД массива целых чисел
int getGCD_Array(int array[], int n) { // n - размер массива
    int gcd = array[0];
    for (int i=1; i<n; i++) {
       gcd = getGCD(gcd,array[i]); 
    }
    return gcd;
}

