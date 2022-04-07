#include <stdio.h>

int Fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main() {
    int n, i;
    printf("Enter number of sequence elements:\n");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", Fibonacci(i));
    }
    return 0;
}
 
