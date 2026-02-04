#include <stdio.h>
void add(float zahl1, float zahl2){
    float ergebnis = zahl1 + zahl2;
    printf("Ergebnis: %f + %f = %f\n", zahl1, zahl2, ergebnis);
} 
void minus(float zahl1, float zahl2){
    float ergebnis = zahl1 - zahl2;
    printf("Ergebnis: %f - %f = %f\n", zahl1, zahl2, ergebnis);
}
void mal(float zahl1, float zahl2){
    float ergebnis = zahl1 * zahl2;
    printf("Ergebnis: %f * %f = %f\n", zahl1, zahl2, ergebnis);
}
void geteilt(float zahl1, float zahl2){
    if (zahl2 == 0){
        printf("Nicht durc 0 teilen");
    }
    else{
        float ergebnis = zahl1 / zahl2;
        printf("Ergebnis: %f / %f = %f\n", zahl1, zahl2, ergebnis);
    }
}
int main(void){
float zahl1;
float zahl2;
char operation;
scanf("%f", &zahl1);
scanf(" %c", &operation);
scanf("%f", &zahl2);

if (operation == '+'){
    add(zahl1, zahl2);
}
else if (operation == '-'){
    minus(zahl1, zahl2);
}
else if (operation == '*'){
    mal(zahl1, zahl2);
}
else if (operation == '/'){
    geteilt(zahl1, zahl2);
}
else{
    printf("Falsche Eingabe\n");
}
return 0;
}
