#include <stdio.h>
#include "../../Jour01/Job03/str_is_digit.c"

int my_atoi(char *str){
    if(str_is_digit(str) == 1){
        int res = 0;
        for (int i = 0; str[i] != '\0'; ++i) {
            res = res * 10 + str[i] - 48;
        }
        return res;
    }
    return 0;
}

//int main(){
//    char *str = "235699";
//
//    int result = my_atoi(str);
//    printf("%i\n", result);
//
//    return 0;
//}