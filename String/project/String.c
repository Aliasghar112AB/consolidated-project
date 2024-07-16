#include "stdio.h"
#include "string.h"

void String() {

    char string[] = "Hello World!";
    printf("%s\n", string);//print a normal string

    unsigned long long int length = strlen(string);
    printf("%llu\n", length);//print the length of string

    int sizeOfArray = sizeof(string) / sizeof(string[0]);
    printf("%d\n", sizeOfArray);//print the size of string with \0 included

    int length_2 = 0;
    do {
        length_2++;
    } while (string[length_2] != '\0');
    printf("%s\n", string);//print the whole string using a do "While" loop

    int length_3 = 0;
    while (string[length_3] != '\0') {
        length_3++;
    }
    printf("%s\n", string);//print the whole string using a "While" loop


    for (int i = 0; i < sizeOfArray; ++i) {
        printf("%c", string[i]);//print the whole string using a "For" loop
    }
    printf("\n");

    char string_1[100];
    printf("Enter a 'string'");
    scanf("%s", *&string_1);//get a string
    int i = 0;
    do {//get length with Do While
        i++;
    } while (string_1[i] != '\0');
    printf("You entered : %s\n", string_1);//print the string
    printf("Length : %d\n", i);//print the length
    printf("Size : %llu", sizeof(string_1) / sizeof(string_1[0]));//print the size
}
