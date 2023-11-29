#include <malloc.h>

int my_pow(int num, int power){
    if(power == 0){
        return 1;
    }else{
        return num * my_pow(num, power - 1);
    }
}

//int main(){
//    printf("%i", my_pow(2, 3));
//
//    return 0;
//}