//task : take input of term from user and print fibonacci  series upto the term


#include <stdio.h>

int main() {
    int term, i, first = 0, second = 1, next;
    
    printf("Enter the term up to which you want to print the Fibonacci series: ");
    scanf("%d", &term);
    
    printf("\nFibonacci series up to term %d:\n", term);
    
    for (i = 0; i < term; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("\t%d ", next);
    }
    
    return 0;
}
