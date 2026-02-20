#include <stdio.h>
int main(void){
    long long int x= 9223372036854775807;
    int y = 1;
    while(x > y){
        y = y + 1;
        printf("%d\n", y);

    }
}
