#include "stdio.h"
#include "string.h"

//Example 1
int sumNumber(int x, int y) {
    return x + y;
}

//example 2
int evenOrOdd(int x) {
    if (x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

//Example 3
int powerOfNumber(int x) {
    return x * x;
}
//Example 4
char reverseString() {
    char string[50] = "Salam";
    printf("Original String :%s\n",string);
    int length = strlen(string);
    for(int i = 0, j = length - 1; i <= j; i++, j--) {
        // swapping characters
        char c = string[i];
        string[i] = string[j];
        string[j] = c;
    }
    printf("Reversed String: %s", string);

}

void Functions() {
    printf("%d\n", sumNumber(5, 10));//Example 1
    printf("%d\n", evenOrOdd(4));//Example 2
    printf("%d\n", powerOfNumber(5));//Example 3
    reverseString();//Example 4

}