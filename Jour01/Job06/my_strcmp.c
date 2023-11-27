#include <unistd.h>

int my_strcmp(char *s1, char *s2){
    int length = 0;

    while(s1[length] != 0){
        if(s2[length] != 0) {
            if (s1[length] != s2[length]) {
                if (s1[length] < s2[length]) {
                    return -1;
                } else {
                    return 1;
                }
            }
        }else{
            return 1;
        }
        length++;
    }

    if(s2[length] != 0){
        return -1;
    }

    return 0;
}