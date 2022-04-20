#include <stdio.h>

int main()
{
    int a, b, c, i, terms;

    /* Input number from user */
    scanf("%d", &terms);

    /* Fibonacci magic initialization */
    a = 0;
    b = 1;
    c = 0;


    /* Iterate through n terms */
    for(i=1; i<=terms; i++)
    {
        printf("%d ", c);

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
    }

    return 0;
}