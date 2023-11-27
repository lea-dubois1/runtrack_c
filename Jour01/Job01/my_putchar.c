#include <unistd.h>

void my_putchar(char input){
    write(1, &input, 1);
}