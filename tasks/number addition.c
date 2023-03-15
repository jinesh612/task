//num:67
//1-67 print
//sum of number:ans

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nAll numbers up to %d:\n", num);

    for (i = 1; i <= num; ++i) {
        printf("%d ", i);
        sum += i;
}

    printf("\n\nSum of all numbers up to %d: %d\n", num, sum);

    return 0;

}