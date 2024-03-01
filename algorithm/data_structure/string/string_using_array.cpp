#include <iostream>
#include <stdlib.h>
#define MAXLEN 255

namespace string_using_array {

//静态数组(定长顺序存储)
typedef struct {
    char ch[MAXLEN];
    int length;
}SString;

//动态数组(堆分配存储)
// typedef struct {
//     char *ch;
//     int length;
// }HString;

bool SubString(SString &Sub, SString S, int pos, int len) {
    if (pos + len - 1 > S.length) {return false;}
    for (int i = pos; i < pos + len; i++) {
        Sub.ch[i-pos+1] = S.ch[i];
    }
    Sub.length = len;
    return true;
}

int StrCompare(SString S, SString T) {
    for (int i = 1; i <= S.length && i <= T.length; i++) {
        if (S.ch[i] != T.ch[i]) {
            return S.ch[i] - T.ch[i];
        }
    }
    return S.length - T.length;
}

//O(mn)
int Index(SString S, SString T) {
    int i = 1, j = 1;
    while(i <= S.length && j <= T.length) {
        if (S.ch[i-1] == T.ch[j-1]) {
            ++i;
            ++j;
        }
        else {
            i = i - j + 2;
            j = 1;
        }
    }
    if (j > T.length) {
        return i - T.length;
    }
    else {return 0;}
}

/**
 * next[1] -> 0
 * 
*/
void GetNext() {
    
}

//O(m+n)
int KMP(SString S, SString T, int next[]) {
    int i = 1, j = 1;
    while(i <= S.length && j <= T.length) {
        if (j == 0 || S.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        }
        else {
            j = next[j];
        }
    }
    if (j > T.length) {
        return i - T.length;
    }
    else {return 0;}
}



} // namespace string_using_array

int main() {
    using namespace string_using_array;
    SString str1 = {"helloWorld",10};
    SString str2 = {"World",5};
    std::cout << Index(str1, str2) << std::endl;
    // std::cout << KMP(str1, str2) << std::endl;

    
}