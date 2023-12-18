#include "../../Jour01/Job01/my_putstr.c"

void func_to_array(char **strs, void (*fun)(char*)){
    for (int index = 0; strs[index] != 0; ++index) {
        fun(strs[index]);
    }
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
//    func_to_array(strings, my_putstr);
//
//    return 0;
//}