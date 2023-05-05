#include <stdio.h>

int factorial(int n);

int main() 
{
    int n, result;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

int factorial(int n)
 {
    if (n == 0)
	 {
        return 1;
    }
    else
	 {
        return n * factorial(n-1);
    }
}
