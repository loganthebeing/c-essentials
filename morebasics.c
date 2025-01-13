// Other useful things to #include are limits.h and math.h
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variables can be declared as char, short, int, long, float, double and long double. All types can be signed or unsigned.
    unsigned int a;
    float b = 5.91;
    a = (unsigned int)b; // Explicit cast to unsigned int

    // Numbers represented in other ways
    long c1 = 15L;       // long integer
    int c2 = 015;        // octal integer
    int c3 = 0xF7;       // hex integer
    float c4 = 15.3e3F;  // float with scientific notation
    double c5 = 15.3e3;  // double with scientific notation
    long double c6 = 15.3e3L; // long double

    // Values of the same type can be stored in arrays
    char letters [20]; // This array has 20 characters, letter[0] is the first character
    char values [40][10][20]; // A three-dimensional array: 40 groups, each with 10 rows and 20 characters

    // Values of different types can be stored in structures
    struct fraction {
        int numerator;
        int denominator;
    } half, third;

    // Assign values to structure members as an example
    half.numerator = 1;
    half.denominator = 2;
    third.numerator = 1;
    third.denominator = 3;

    // If-Else construct
    int n = 2;
    if (n == 2) { // Checks whether n equals 2
        printf("Hello world!");
    } else {
        printf("Was a variable changed?");
    }

    // Switch construct
    int x = 5;
    switch(x) {
        case 1: printf("x is nine\n");
            break;
        case 2: printf("x is seven\n");
            break;
        default: printf("x is neither nine nor seven\n");
            break;
    }

    // Program ends here
    return 0;
} 
