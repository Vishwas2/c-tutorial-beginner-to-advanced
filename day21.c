// WRITE A PROGRAM TO PRINT FIBONACCI SERIES USING BOTH RECURSIVE AND ITERATIVE APPROACH

#include <stdio.h>
int fibonacci_recursive(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n)
{
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main(int argc, char const *argv[])
{
    int n, i;
    printf("Enter the number of terms :\n");
    scanf("%d", &n);
    printf("Fibonacci series using recursive method : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", fibonacci_recursive(i));
    }
    printf("\nFibonacci series using iterative method :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", fibonacci_iterative(i));
    }
    return 0;
}

// In the above case the iterative approach is faster than the recursive approach . This is because the recursive approach requires alot of redundant calculations.
// In contrast, iterative approach avoids redundant calculations by storing the intermediate values of the fibonacci sequence in the array f so that they can be
// reused in the subsequent calculations.