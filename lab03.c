/*****************************************************
    Lab03.c written by Timothy Hennessy 
    CSC 314 Assembly Fall 2015 
****************************************************/

#include <stdio.h>
#include <string.h>

// global vars, consts
#define SIZE 25
char output[] = "Welcome!";
char string1[] = "greater than";
char string2[] = "less than";
char string3[] = "equal to";
int A = 10;     // used in place of 0Ah
int var_a = 10;
char eax[SIZE];

// function prototypes
void label1(void);
void label2(void);
void label3(void);

// functions represent branching/jumps
int main(void)
{
    // simulates moving pointer into eax register
    strcpy(eax, output);
    printf("%s\n", eax);
    
    if (var_a <= A)
        label1();   // simulates jle
    else
       {
         strcpy(eax, string1);
         printf("%s\n", eax);
         label3();
       }

    // suppose label4 is here

    return 0;
}

void label1(void)
{
    if (var_a > 9)
        label2();
    else
    {
        strcpy(eax, string2);
        printf("%s\n", eax);
    }
    label3();
}

void label2(void)
{
    strcpy(eax, string3);
    printf("%s\n", eax);
    label3();
}

void label3(void)
{
    while (var_a > 0)
    {
       var_a =  var_a >> 1;
        printf("%d\n", var_a);
    }
}
