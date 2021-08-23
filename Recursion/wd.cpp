#include<stdio.h>

int foo(char *s) {
    int counter = 0;
    while(s[counter]!='\0')
        counter++;
    return counter;
}


int main() {
    char *s="thisisasetofliterals";
    int count = foo(s);
    printf("%d", count);
    return 0;
}
