#include <unistd.h>

void my_putchare(char input){
    write(1, &input, 1);
}