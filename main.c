#include <stdio.h>
#include "gcd.h"

int main() {
    int array[] = {9, 18, 30, 60, 120, 36, 33, 24}; // Исходный массив
    int length = sizeof(array) / sizeof(int); // Размер массива
    // Контрольный вывод массива
    printf("Input array: [");
    for(int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length-1 ) printf(", ");
        else printf("]\n");
    }
    // Подсчет и вывод НОД
    printf("Great common divisor of array = %d\n", getGCD_Array(array, length));
}
