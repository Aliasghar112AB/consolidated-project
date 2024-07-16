#include "stdio.h"
#include "string.h"

struct student {
    char name[20];
    int studentCode;
    int score;
};

void StudentInfo() {
    struct student info;

    char name[20];
    printf("Name :");
    scanf("%s", &name);
    strcpy(info.name, name);


    int student_code;
    printf("studentCode :");
    scanf("%d", &student_code);
    info.studentCode = student_code;

    int score;
    printf("Score :");
    scanf("%d", &score);
    info.score = score;
    printf("Your name : %s\n", info.name);
    printf("Your student Code : %d\n", info.studentCode);
    printf("Your Score : %d\n", info.score);
}