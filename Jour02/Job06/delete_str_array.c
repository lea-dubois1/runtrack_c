#include <malloc.h>

void delete_str_array(char ***strs){
    for (int i = 0; strs[i] != 0; ++i) {
        for (int j = 0; strs[i][j] != 0; ++j) {
            free(strs[i][j]);
        }
        free(strs[i]);
    }
    strs[0] = NULL;
}