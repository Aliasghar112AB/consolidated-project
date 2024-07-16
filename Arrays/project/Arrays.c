#include "stdio.h"

void specificNumbers() {
    int length;
    printf("length:");
    scanf("%d", &length);//get the size of the array
    int array[length];
    int size = (sizeof(array) / sizeof(array[0]));
    printf("Size : %d\n", size);
    float average;
    for (int i = 0; i < size; ++i) {
        printf("Enter the %d Number :", i);
        scanf("%d", &array[i]);//get the numbers
        average += array[i];//collect the numbers
    }
    printf("\n");
    printf("Average : %.1f\n", average / size);//print the average
}


void rangeNumbers() {

    int length_2;
    printf("Length : ");
    scanf("%d", &length_2);

    int array_2[length_2];
    int index_number = 0;
    int average_2 = 0;
    for (int i = 0; i <= length_2; i++) {
        array_2[index_number] = i;
        index_number++;
    }
    for (int i = 0; i <= length_2; ++i) {
        printf("%d ", array_2[i]);
        average_2 += array_2[i];
    }
    printf("\n");
    printf("%d", average_2 / length_2);
}

void selectedRangeNumbers() {
    int length;
    printf("Length :");
    scanf("%d", &length);
    int array[length];
    float average = 0;
    int size = sizeof(array) / sizeof(array[length]);
    int min;
    int max;
    printf("Min :");
    scanf("%d", &min);

    printf("Max :");
    scanf("%d", &max);

    int indexNumber;
    for (int i = 0; i <= max; ++i) {
        indexNumber = i;
        array[indexNumber] = min;
        printf("index %d : %d\n", i, array[indexNumber]);
        average += array[indexNumber];
        min++;
        if (i == length) {
            break;
        }
    }
    printf("\n");
    printf("%.1f\n", average / length);
    for (int i = 0; i <= length; ++i) {
        printf("%d ", array[i]);
    }
}

char chooseAverageMethod(char method) {
    switch (method) {
        case '1':
            specificNumbers();
            break;
        case '2':
            rangeNumbers();
            break;
        case '3':
            selectedRangeNumbers();
            break;
    }
}

void message() {
    printf("Write (1) to specific Numbers\n");
    printf("Write (2) for range Numbers\n");
    printf("Write (3) for selected Range Numbers\n");
}

void Arrays() {
    int cIsNotSafe[50];
    cIsNotSafe[100] = 112;
    printf("%d\n", cIsNotSafe[100]);
    // I saw this problem and I like to share it with you to say C is not SAFE :)
    char method;
    message();
    scanf("%c", &method);
    chooseAverageMethod(method);

}