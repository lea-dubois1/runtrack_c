#include <malloc.h>
#include "../../Jour01/Job01/my_putstr.c"
#include "../Job04/sort.c"
#include "../../Jour01/Job07/trim.c"

void my_strsort(char ** strs){
    for (int str = 0; strs[str] != 0; str++) {
        strs[str] = trim(strs[str]);
    }

    strs = sort(strs);

    for (int str = 0; strs[str] != 0; str++) {
        my_putstr(strs[str]);
        write(1, " ", 1);
    }
}

int main(int num, char **args){
    my_strsort(args);
}