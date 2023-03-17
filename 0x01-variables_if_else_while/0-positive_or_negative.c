#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand() % 201 - 100; // generates a random number between -100 and 100
    printf("The number is %d and it ", n);
    
    if(n > 0) {
        printf("is positive");
    } else if(n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }
    
    printf("\n");
    return 0;
}

