#include "stdio.h"
#include "string.h"

struct structExample {
    int integer;
    int age;
    char name[20];
};
union unionExample {
    int integer;
    int age;
    char name[20];
};
union test3 {
    int arr[10];
};

void StructUnion() {
    union test3 test3;
    int size_2 = sizeof(test3.arr);
    int size_1 = sizeof(test3);
    printf("%d\n", size_1);
    printf("%d\n", size_2);
    struct structExample s = {1, 2, "Ali"};
    printf("integer : %d\nAge : %d\nName : %s\n", s.integer, s.age, s.name);
    printf("Size of integer : %d\n", sizeof(s.integer));
    printf("size of age : %d\n", sizeof(s.age));
    printf("Size of the name : %d\n", sizeof(s.name));
    printf("Size of the struct : %d\n", sizeof(s));
    printf("\n");
    /* the difference between size of a structure and a union
     * is the size of a structure equal to the sum of the variable used in
     * but in the union the size equals to the largest amount of a variable in union
     */

    union unionExample u;
    //print the unionExample
    u.integer = 12;
    printf("integer : %d\n", u.integer);

    u.age = 16;
    printf("age : %d\n", u.integer);

    strcpy(u.name, "Ali");
    printf("name : %s\n", u.name);

    //print the size of every union variable
    printf("size of integer : %d\n", sizeof(u.integer));
    printf("size of age : %d\n", sizeof(u.age));
    printf("size of name : %d\n", sizeof(u.name));
    //print the size of union
    printf("size of the whole union : %d", sizeof(u));
    /* in here we understand that the size of the whole array
     * equals to the largest variable in the same union
     * and because the largest variable in here is name the union size
     * equals to the size of name variable
     */
}