#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();
/* testing
int main(){
    printf("%c\n", (char) randchar());

    return 0;
}
*/
char randchar(){
    int ch = 0;

    srand(time(NULL));
    ch = rand();
    ch = ch % 26;
    ch += 64;
    
    return ch;
}