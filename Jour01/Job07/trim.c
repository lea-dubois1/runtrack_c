#include <malloc.h>

char *trim(char *src){
    int i = 0;
    int debut = 0;
    int firstTime = 1;

    while(src[i] != 0){
        if(src[i] != ' ' && src[i] != '\t' && src[i] != '\n' && src[i] != '\r' && src[i] != '\v' && src[i] != '\f'){
            if(firstTime == 1){
                debut = i;
                firstTime = 0;
            }
        }
        i++;
    }

    int fin = 0;
    int firstTimeEnd = 1;

    while(i >= 0){
        if(src[i] != ' ' && src[i] != '\t' && src[i] != '\n' && src[i] != '\r' && src[i] != '\v' && src[i] != '\f' && src[i] != 0){
            if(firstTimeEnd == 1){
                fin = i;
                firstTimeEnd = 0;
            }
        }
        i--;
    }

    int newStrLen = fin - debut + 2;

    char *result = (char*)malloc(sizeof(char) * newStrLen);

    int j = debut;

    while(j <= fin){
        result[j - debut] = src[j];
        j++;
    }

    return result;
}
