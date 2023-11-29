#include <stdio.h>
#include "../Job03/power.c"

int my_sqrt(int n){
    if(n == 0){
        return 0;
    }

    for (int i = 1; i < n; ++i) {
        if(power(i, 2) == n){
            return i;
        }
    }

    return 0;
}

//int main(){
//    printf("%i", my_sqrt(16));
//
//    return 0;
//}