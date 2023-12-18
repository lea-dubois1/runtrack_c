#include <malloc.h>
#include "../../Jour01/Job01/my_putstr.c"

void my_tolower(char ** strs){
    int i = 0;
    for (int str = 0; strs[str] != 0; str++) {
        while (strs[str][i] != 0){
            if (strs[str][i] > 65 && strs[str][i] < 90){
                my_putchar((char)(strs[str][i] + 32));
            }
            else{
                my_putchar(strs[str][i]);
            }
            i++;
        }
        write(1, "\n", 1);
        i = 0;
    }
}

int main(int num, char **args){
    my_tolower(args);
}