/* #include checks the /usr/include directory for .h files with specific sets of code. stdio.h and stdlib.h should always be included. */
#include <stdio.h>
#include <stdlib.h>

/* Functions are defined at the top of a program */
int mean(int a, int b)
{
    /* Calculates the mean of the int arguments a and b */
    return (a + b)/2;
}

/* Execution starts here at the main function */
int main()
{
    /* ';' ends a statement */
    int i, j;
    int answer;

    i = 7;
    j = 9;

    /* Stores the value of the mean of i and j in the int variable answer */
    answer = mean(i, j);

    /* Prints answer using printf. %d is a placeholder for int values. Use %f for floating-point numbers and %s for strings. */
    printf("The mean of %d and %d is %d\n", i, j, answer);

    /* Program ends here */
    return 0;
}

/* Compile the program using: gcc -o basics basics.c
   - 'gcc' is the GNU C compiler.
   - '-o basics' specifies the name of the output executable file (basics). */
