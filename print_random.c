//Given Project code
#include <stdio.h>
#include <stdlib.h>

char* rand_string_alloc(size_t size);

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main(){

    return EXIT_SUCCESS;
}