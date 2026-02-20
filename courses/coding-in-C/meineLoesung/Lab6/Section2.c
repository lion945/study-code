#include <stdio.h>
struct Car {
    float fuel_level;
    float max_fuel_level;
    char model[20];
};
char refuel(struct Car *car){
    float amount = 0.1;
    while (car->fuel_level < car->max_fuel_level) {
        car->fuel_level += amount;
    }

    return 'F';
        
}
int main(void){
    struct Car car1 = {0.1, 5, "Mitsubishi"};
    printf("%c\n", refuel(&car1));
}