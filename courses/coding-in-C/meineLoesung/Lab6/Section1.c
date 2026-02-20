#include <stdio.h>
#include <stdlib.h>
int main(void){
     const char *str = "hi";
    FILE* stream = fopen("sensor1.txt", "r+");
    char *output = malloc(100000000 * sizeof(char));
    fgets(output, 1000000, stream);
    printf("Sensor1: %s", output);
     char x = fgetc(stream);
     printf("%c", x);
    int fputc(int c, FILE *stream);
    int fputs(const char *str, FILE *stream);

}
