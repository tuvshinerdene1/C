#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        // Allocate 1MB of memory in an infinite loop
        void *ptr = malloc(1024*1024*1024);
        
        // Check if memory allocation fails
    }
    return 0;
}