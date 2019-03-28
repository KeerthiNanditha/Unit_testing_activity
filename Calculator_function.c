#include "Calculator.h"

float calculator(float num1,char op, float num2)
{
    float result=0.0f;


       switch(op)
    {
        case '+':
            result = add(num1, num2);

            break;

        case '-':
            result = sub(num1, num2);
            break;

        case '*':
            result = mult(num1, num2);
            break;

        case '!':{
            if(num2==0)
                {
                    printf("Invalid Divisor '0'!");
                    return 0;
                }
            else
                result = div(num1, num2);
                }
            break;

        default:
            printf("Invalid operator");
    }


    //printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return result;
}



float add(float num1, float num2)
{

    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}


float mult(float num1, float num2)
{
    return num1 * num2;
}


float div(float num1, float num2)
{
    return num1 / num2;
}
