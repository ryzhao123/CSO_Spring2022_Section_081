/* 
    Name: Rena Zhao
    NetID: ryz215
    GitHub Name: ryzhao123
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char **argv){
    //  problem 1(a)
    float a, b, c;
    a = 20;
    b = 11;
    c = 12;
    float cos_max_angle = (b*b + c*c - a*a)/(2*b*c); //Law of Cosines (https://courses.lumenlearning.com/suny-osalgebratrig/chapter/non-right-triangles-law-of-cosines/)
    printf("1(a): The cosine of the maximum angle of the triangle 11-12-20 is: %.3f\n", cos_max_angle);
   
    //  problem 1(b)
    printf("1(b): The floating-point number from (a) is represented in single-precision floating-point format, occupying 32 bits in computer memory. ");
    printf("1 bit represents the sign, 8 represent the exponent and 23 represent the fraction. ");
    printf("The floating-point number is 10111111000000101101000011100101.\n");
    
    //  problem 1(c)
    float max_angle = acos(cos_max_angle);
    float triangle_area = 0.5*b*c*sin(max_angle);
    printf("1(c): The area of the triangle 11-12-20 is: %.3f\n", triangle_area);
    
    //  problem 1(d)
    printf("1(d): The floating-point number from (c) is represented in single-precision floating-point format, occupying 32 bits in computer memory. ");
    printf("1 bit represents the sign, 8 represent the exponent and 23 represent the fraction. ");
    printf("The floating-point number is 01000010011000101101111100111011.\n");
    
    //  problem 2
    float side1, side2, side3;
    printf("2: Enter side1 of a triangle: ");
    scanf("%f", &side1);
    printf("Enter side2 of a triangle: ");
    scanf("%f", &side2);
    printf("Enter side3 of a triangle: ");
    scanf("%f", &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        float p = (side1 + side2 + side3)/2;
        float area = sqrt(p*(p - side1)*(p - side2)*(p - side3)); // Heron's Formula (https://mathworld.wolfram.com/HeronsFormula.html)
        printf("Valid triangle. The area is %.3f\n", area);
    }
    else {
        printf("Invalid triangle.");
    }
    return 0;
}
