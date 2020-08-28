#include "printerr.h"

int mx_strlen(const char *s) {

    int t = 0;
    for(int f = 0; s[f] != 0; f++) {
        t++;
    }    
    return t;
}

