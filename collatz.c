#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int collatz(int n);

int main(void)
{
    int positiveNumber = 3;
    printf("%i\n", collatz(positiveNumber));
}

int collatz(int n)
{
    int steps = 0;
    if(n == 1)
    {
        return steps;
    }

    if ((n % 2) == 0)
    {
        steps++;
        return steps + collatz(n / 2);
    }
    else
    {
        steps++;
        return steps + collatz((3 * n) + 1);
    }
}
