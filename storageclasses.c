#include <stdio.h>
int a = 10; // global variable declaration: its scope is through entire program(we can use this variable anywhere in the program)

int *func()
{
    static int x = 50;//static variable: its lifetime is throughout program and its scope is for one c-file
    return &x;
}

int main()
{
    printf("a = %d\n", a);// It prints 10
    {
        int b = 20;//Local variable : its scope is within this block
        printf("b = %d", b); //It prints 20
    }
    printf("b = %d", b);//It gives error, beacuse it is outside the scope of the block
    register int c = 10;// register variable: It request compiler to allocate memory from cpu register
    int *ptr = &c; //It gives error , because we cannot access the cpu register directly
    int *p = func();
    printf("*p = %d\n", *p); // It prints 50
    return 0;
}
