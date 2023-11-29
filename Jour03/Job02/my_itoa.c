#include <malloc.h>

int my_pow(int num, int power){
    int result = num;

    if(num == 0 || power == 0){
        return 0;
    }

    while(power != 1){
        result *= num;
        power--;
    }

    return result;
}

char *my_itoa(int n){
    int temp = n, length = 0, numToAdd, numToSubtract = 0;

    while(temp > 0){
        temp = temp / 10;
        length++;
    }

    char *string = malloc(sizeof(char) * (length + 1));
    int i = 0;

    while(length != 0){
        int powerOfTen = my_pow(10, length - 1);
        numToAdd = powerOfTen == 0 ? n :  n / powerOfTen;

        string[i] = (char)('0' + numToAdd);

        numToSubtract += powerOfTen == 0 ? numToAdd :  numToAdd * powerOfTen;
        n -= numToSubtract;

        numToSubtract = 0;
        i++;
        length--;
    }

    string[i] = 0;

    return string;
}

//int main(){
//    int n = 1569;
//
//    char *result = my_itoa(n);
//
//    printf("%s", result);
//
//    return 0;
//}