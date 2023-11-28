#include <malloc.h>
#include "../../Jour01/Job06/my_strcmp.c"

char **sort(char **strs){
    char *temp = "";
    int i = 0, j = 0, c = 0, isInPlace = 0, end = 0;

    while(strs[end] != 0){
        end++;
    }

    while(i != end){
        while(strs[j + 1] != 0) {
            if(my_strcmp(strs[j], strs[j + 1]) > 0){
                temp = strs[j];
                strs[j] = strs[j + 1];
                strs[j + 1] = temp;
            }
            j++;
        }
        i++;
        j = 0;
    }

    return strs;
}

//int main(){
//    char **strings = malloc(sizeof(char*) * 9);
//    int i = 0;
//
//    while(i < 9){
//        strings[i] = malloc(sizeof(char) * 9);
//        i++;
//    }
//
//    strings[0] = "jsgb";
//    strings[1] = "zjytr";
//    strings[2] = "abgrsb";
//    strings[3] = "jtrng";
//    strings[4] = "oklzeik";
//    strings[5] = "buovfd";
//    strings[6] = "gnipm";
//    strings[7] = "vfxht";
//    strings[8] = 0;
//
//    char **result = sort(strings);
//
//    int j = 0;
//
//    while(result[j] != 0){
//        printf("%s\n", result[j]);
//        j++;
//    }
//
//    return 0;
//}