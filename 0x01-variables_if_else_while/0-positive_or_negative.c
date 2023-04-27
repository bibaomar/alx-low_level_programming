#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints if a random number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n < 0)
        printf("negative\n");
    else
        printf("zero\n");
    return (0);
}
