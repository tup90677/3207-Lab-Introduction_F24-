#include <stdio.h>
#include <stdlib.h>

char randchar(){
    int ch = 0;

    srand(time(NULL));
    ch = rand();
    ch = ch % 26;
    ch += 64;
    
    return ch;
}