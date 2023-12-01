#include <malloc.h>

int isSpace(char c) {
    if (c != ' ' && c != '\t' && c != '\n' && c != '\r' && c != '\v' && c != '\f' && c != 0) {
        return 0;
    }

    return 1;
}

int countLetters(char *str, int i){
    int count = 0;

    while(isSpace(str[i]) == 0 && str[i] != 0){
        count++;
        i++;
    }

    return count;
}

int countWords(char *str){
    int i = 0;
    int count = 0;

    while(str[i] != 0){
        if(i == 0 && isSpace(str[i]) == 0){
            count++;
        }else if(isSpace(str[i]) && isSpace(str[i + 1]) == 0){
            count++;
        }
        i++;
    }

    return count;
}

char **split(char *src){
    int i = 0, j = 0, numLetters, numWord = 0;
    int numWords = countWords(src);
    char **result = malloc((sizeof(char*) * numWords + 1));
    char *oneWord;

    while(src[i] != 0){
        if(isSpace(src[i]) == 0){
            numLetters = countLetters(src, i);
            oneWord = malloc(sizeof(char) * numLetters + 1);

            while (j < numLetters){
                oneWord[j] = src[i + j];
                j++;
            }

            oneWord[j] = 0;
            result[numWord] = oneWord;
            numWord++;
            j = 0;
            i += numLetters;
        }
        i++;
    }

    result[numWords + 1] = 0;
    return result;
}

//int main(){
//    char *src = "   \n \t hello world   have fun  \r ";
//
//    char **result = split(src);
//
//    int i = 0;
//
//    while(result[i] != 0){
//        printf("%s\n", result[i]);
//        i++;
//    }
//
//    return 0;
//}
