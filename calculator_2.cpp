//CALCULATOR WITH SWITCH  29/08/25

#include<stdio.h>
int main()
{
    int a,b;
    char calculator;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("Enter operator");
    scanf(" %c",&calculator);
    switch(calculator)
    {
        case '+':
                    printf("Sum is %d",a+b);
                    break;
        case '-':
                    printf("Subtraction is %d",a-b);
                    break;
        case '*':
                    printf("Multiplication is %d",a*b);
                    break;
        case '/':
                    if(b==0)
                    {
                        printf("Division is not possible");
                    }    
                     else 
                    { 
                        printf("Division is %d",a/b);
                    }
                    break;
        default : 
                    printf("Invalid choice");
                    break;
    }
    return 0;
}