#include "../inc/mx_wc.h"

int mx_strlen(const char *s){
    int count = 0;
    
    while (s[count]){
      count ++;
    }
    return count;
}

