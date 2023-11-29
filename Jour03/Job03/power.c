#include <malloc.h>

int power(int num, int pow){
    if(num == 0){
        return 0;
    }

    if(pow == 0){
        return 1;
    }else{
        return num * power(num, pow - 1);
    }
}

//int main(){
//    printf("%i", power(2, 3));
//
//    return 0;
//}