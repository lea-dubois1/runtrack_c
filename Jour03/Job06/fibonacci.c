#include <unistd.h>
#include "../Job01/my_atoi.c"
#include "../Job02/my_itoa.c"

int fibonacci(int num){
    if(num == 1 || num == 2){
        return 1;
    }else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main(int isParam, char **args){
    if(isParam == 1){
        write(1, " ", 1);
    }else {
        char *result = my_itoa(fibonacci(my_atoi(args[1])));

        int length = 0;

        while(result[length] != 0){
            length++;
        }

        write(1, result, length);
        write(1, "\n", 1);
    }

    return 0;
}