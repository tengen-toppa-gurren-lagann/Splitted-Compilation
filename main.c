#include <stdio.h>
#include "gcd.h"

int main() {
    int array[] = {9, 18, 30, 60, 120, 36, 33, 24}; // �������� ������
    int length = sizeof(array) / sizeof(int); // ������ �������
    // ����������� ����� �������
    printf("Input array: [");
    for(int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length-1 ) printf(", ");
        else printf("]\n");
    }
    // ������� � ����� ���
    printf("Great common divisor of array = %d\n", getGCD_Array(array, length));
}
