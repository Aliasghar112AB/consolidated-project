cmake_minimum_required(VERSION 3.28)
set(Cmake_C_standard 11)
project(consolidated-project C)


add_executable(consolidated-project
        Main.c

        Calculator/project/Calculator.c
        number-guessing-game/project/numberGuessingGame.c
        output-input/project/outputInput.c
        Functions/project/Functions.c
        String/project/String.c
        Arrays/project/Arrays.c
        Struct-union/project/Struct-Union.c
        StudentInfo/project/StudentInfo.c
        ReadFile/project/ReadFile.c
)