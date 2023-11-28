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