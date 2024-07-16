#include "stdio.h"

void ReadFile() {
    FILE *file;
    file = fopen("C:\\Users\\abbas\\CLionProjects\\consolidated-project\\ReadFile\\project\\My-information.txt", "r");//Access or create file
    if (file == NULL) {
        printf("File doesn't exist\nPlease check the folder again");//Testing if there is any file
    }
    char File[100];//Declaring a char to store File
    while (fgets(File, 100, file)) {
        printf("%s", File);//Print the file
    }
    fclose(file);//Close the file

}