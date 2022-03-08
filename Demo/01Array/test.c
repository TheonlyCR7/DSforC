
#include <stdio.h>

void main(){
    int array[2];
    array[0] = 1;
    array[1] = 2;
    int *top;
    top = &array[0];
    printf("%d", *top);
    printf(" ");
    top--;
    printf("%s", *top);
    printf(" ");
    printf("%d", *top);
    top--;
    printf(" ");
    printf("%s", *top);
    top++;
    printf(" ");
    printf("%s", *top);
    top++;
    printf(" ");
    printf("%d", *top);
}