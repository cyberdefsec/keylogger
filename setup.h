#ifndef __SETUP_H__
#define __SETUP_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <libgen.h>
#include <stdbool.h>
#include <windows.h>

#define AUTORUN "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"
#define LEN_VALUE_NAME 1024

bool setup(char *curr_path_app);

#endif // __SETUP_H__
