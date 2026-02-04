#include <stdio.h>
int main(void) {
        float zahl1;
        float zahl2;
        float ergebnis;
        char operation;
        scanf("%f", &zahl1);
        scanf(" %c", &operation);
        scanf(" %f", &zahl2);
        printf("%c", operation);
        if (operation == '+') {
            ergebnis = zahl1 + zahl2;
        }
        else if (operation == '/' && zahl2 == 0){
            printf("Nicht durch 0 teilen");
        }
        else if (operation == '-'){
            ergebnis = zahl1 -zahl2;
        }
        else if (operation == '*'){
            ergebnis = zahl1 * zahl2;        
        }
        else if (operation == '/'){
            ergebnis = zahl1 / zahl2;
        }
        else{
            printf("Fasche Eingabe");
        }
        printf("Das Ergbnis ist: %f %c %f = %f", zahl1, operation, zahl2, ergebnis);

        return 0;
    }

          