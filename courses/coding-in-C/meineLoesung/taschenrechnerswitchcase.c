#include <stdio.h>
int main(void){
    float zahl1;
    float zahl2;
    float ergebnis;
    char operation;
    scanf("%f", &zahl1);
    scanf(" %c", &operation);
    scanf("%f", &zahl2);
    switch(operation){
        case '+': 
            ergebnis = zahl1 + zahl2;
            break;
        case '-':
            ergebnis = zahl1 - zahl2;
            break;
        case '*':
            ergebnis = zahl1 * zahl2;
            break;
        case '/':
            if(zahl2 == 0){
                printf("nicht durch 0 teilen");
                return 1;
            }
            ergebnis = zahl1 / zahl2;
            break;
        default:
            printf("Falsche Eingabe");
    }
    printf("Ergebnis: %f", ergebnis);
}