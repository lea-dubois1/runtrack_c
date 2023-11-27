#include <unistd.h>

int char_is_digit(char character){
    if(character < '0' || character > '9'){
        return 0;
    }
    return 1;
}