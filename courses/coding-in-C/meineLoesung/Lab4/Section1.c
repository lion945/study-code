#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char *word) {
    int length = strlen(word);
    int i;
    
    // Vergleiche Zeichen von beiden Enden
    for (i = 0; i < length / 2; i++) {
        // Konvertiere beide Zeichen zu Kleinbuchstaben für Vergleich
        if (tolower(word[i]) != tolower(word[length - 1 - i])) {
            return 0;  // Kein Palindrom
        }
    }
    return 1;  // Ist ein Palindrom
}
int main(void){
    char word[101];  // 100 Zeichen + '\0'
    
    printf("Please enter your word (max. 100 characters): ");
    
    // Sichere Eingabe mit fgets
    if (fgets(word, sizeof(word), stdin) != NULL) {
        // Entferne Newline-Zeichen am Ende
        size_t len = strlen(word);
        if (len > 0 && word[len-1] == '\n') {
            word[len-1] = '\0';
        }
        
        // Prüfe ob Palindrom
        if (isPalindrome(word)) {
            printf("\nYour provided word \"%s\" is a palindrome.\n", word);
        } else {
            printf("\nYour provided word \"%s\" is not a palindrome.\n", word);
        }
    } else {
        printf("Fehler beim Einlesen!\n");
    }
    
    return 0;
}