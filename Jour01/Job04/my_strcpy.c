#include <unistd.h>
#include <malloc.h>

char *my_strcpy(char *dest, const char *src){
    int length = 0;

    while(src[length] != 0) {
        length++;
    }

    dest = (char*)malloc(sizeof(char) * length);

    length = 0;

    while(src[length] != 0){
        dest[length] = src[length];
        length++;
    }

    return dest;
}