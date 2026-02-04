#include <stdio.h>

int main() {
    // Loop through rows from 8 down to 1
    for (int row = 8; row >= 1; row--) {
        // Loop through columns from A to H
        for (char col = 'A'; col <= 'H'; col++) {
            printf("%c%d ", col, row);
        }
        printf("\n");
    }
    
    return 0;
}