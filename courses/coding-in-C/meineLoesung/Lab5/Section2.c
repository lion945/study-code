#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("Error: At least one argument required!\n");
        printf("Usage: %s <arg1> <arg2> ... <argN>\n", argv[0]);
        return 1;
    }
    printf("=== METHOD 2: Pointer Dereferencing * ===\n\n");
    
    char **current = argv;  // Pointer auf erstes Element
    int index = 0;
    
    while (index < argc) {
        printf("Argument %d at address \"%p\" has content: %s (length: %zu)\n",
               index,                
               (void*)(*current),   
               *current,            
               strlen(*current));   
        
        current++;  
        index++;
    }
}