#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();
char randchar(){
    int ch = 0;

    ch = rand();
    ch = ch % 26;
    ch += 64;
    
    return ch;
}