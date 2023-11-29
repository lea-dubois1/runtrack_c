#include <unistd.h>
#include <stdio.h>
#include "../Job01/my_atoi.c"
#include "../Job02/my_itoa.c"

int factorial(int n) {
    if(n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int main(int isParam, char **args){
    if(isParam == 1){
        write(1, " ", 1);
    }else {
        char *result = my_itoa(factorial(my_atoi(args[1])));

        int length = 0;

        while(result[length] != 0){
            length++;
        }

        write(1, result, length);
        write(1, "\n", 1);
    }

    return 0;
}