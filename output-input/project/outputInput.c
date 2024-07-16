#include "stdio.h"

void outputInput() {
    int c;//declare a variable
    c = getchar();//make it input
    while (c != EOF) {//continue until end of the file
        putchar(c);//make input as output
        c = getchar();// input again to continue loop forever
    }
}