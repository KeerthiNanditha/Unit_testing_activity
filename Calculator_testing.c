#include<stdio.h>
#include<assert.h>

float calculator(float , char , float);

void add_test()
{
    printf("Testing Addition function\n");
    assert(calculator(2,'+',2)==4);
    assert(calculator(2,'+',-2)==(0));
    assert(calculator(-2,'+',-2)==(-4));
    assert(calculator(0,'+',2)==(2));
    assert(calculator(0,'+',-2)==(-2));
    printf("OK, Addition Tested...\n");
}

void sub_test()
{
    printf("Testing Subtraction function\n");
    assert(calculator(2,'-',2)==(0));
    assert(calculator(2,'-',-2)==(4));
    assert(calculator(-2,'-',-2)==(0));
    assert(calculator(-2,'-',2)==(-4));
    printf("OK, Subtraction Tested...\n");
}

void multiply_test()
{
    printf("Testing Multiplication function\n");
    assert(calculator(2,'*',0)==(0));
    assert(calculator(2,'*',-2)==(-4));
    assert(calculator(-2,'*',-2)==(4));
    printf("OK, Multiplication Tested...\n");
}

void div_test()
{
    printf("Testing div function\n");
    assert(calculator(2,'!',0)==(0));
    assert(calculator(2,'!',-2)==(-1));
    assert(calculator(-2,'!',-2)==(1));
    printf("OK, Division Tested...\n");
}
int main()
{
    add_test();
    sub_test();
    multiply_test();
    div_test();
    printf("Test complete\n");
}
