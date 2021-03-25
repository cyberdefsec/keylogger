#ifndef __SETUP_H__
#define __SETUP_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>

#define AUTORUN "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"
#define LEN_VALUE_NAME 1024

bool setAutoRun(const char *currPath, const char *nameProg);

bool setHidden(const char *path);

int getNewPath(char *newPath, DWORD size);

#endif // __SETUP_H__
