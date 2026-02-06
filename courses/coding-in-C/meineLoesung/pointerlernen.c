#include <stdio.h>
int main(void){
    int myNumbers[5] = {10 ,20  ,30 ,40 ,50};
    int *pointer1 = myNumbers + 1;
    int *pointer2 = myNumbers + 4;
    printf("pointer1 %p\n", pointer1);
    printf("pointer2 %p\n", pointer2);
    int difference = pointer2 - pointer1;
    printf("difference: %d\n", difference);
}