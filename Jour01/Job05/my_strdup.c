#include <unistd.h>
#include <stdio.h>
#include <malloc.h>

char *my_strdup(char *src){
    int length = 0;

    while(src[length] != 0) {
        length++;
    }

    char *copy = (char*)malloc(sizeof(char) * length);

    length = 0;

    while(src[length] != 0){
        copy[length] = src[length];
        length++;
    }

    return copy;
}