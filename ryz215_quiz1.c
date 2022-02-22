#include <stdio.h>

int fun(int a, int b, int c) {
    if(a==b && a==c && b==c) {
        printf("This is an equilateral triangle.");
    }
    else if(a==b || a==c || b==c) {
        printf("This is an isoceles triangle.");
    }
    else if(a + b > c && a + c > b && b + c > a) {
        printf("This is a normal triangle.");
    }
    else if(a + b < c || a + c < b || b + c < a) {
        printf("This is not a valid triangle.");
    }
    return 0;
} 

int main () {
    int a, b ,c;
    int result;
    printf("Enter 3 sides of a triangle in format a=__,b=__,c=__: ");
    scanf("a=%d,b=%d,c=%d",&a,&b,&c);
    fun(a,b,c);
    return 0;
}

