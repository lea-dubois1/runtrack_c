#include <malloc.h>
#include "../../Jour01/Job05/my_strdup.c"

char **array_clone(char **strs, int n){
    int i = 0;
    char **result = malloc(sizeof(char*) * (n + 1));

    while(i != n){
        result[i] = my_strdup(strs[i]);
        i++;
    }

    result[i] = 0;

    return result;
}

int main(){
    char **strings = malloc(sizeof(char*) * 9);
    int i = 0;

    while(i < 9){
        strings[i] = malloc(sizeof(char) * 9);
        i++;
    }

    strings[0] = "number 1";
    strings[1] = "number 2";
    strings[2] = "number 3";
    strings[3] = "number 4";
    strings[4] = "number 5";
    strings[5] = "number 6";
    strings[6] = "number 7";
    strings[7] = "number 8";
    strings[8] = 0;

    char **result = array_clone(strings, 5);

    int j = 0;

    while(result[j] != 0){
        printf("%s\n", result[j]);
        j++;
    }

    return 0;
}