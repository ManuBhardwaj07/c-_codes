// MINI ATM 29/08/25
#include<stdio.h>
#include<string.h>
int main()
{
    int bal=10000000,wid,dep,choice;
    char pass[20];
    printf("Enter 1 to check balance \nEnter 2 for withdrawal\nEnter 3 for Deposit\nEmyer 4 to Exit");
    printf("\nENTER YOUR CHOICE ");
    scanf("%d",&choice);
    
    printf("Enter pass: ");
    scanf("%19s", pass);

    if(strcmp(pass, "global@123") == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied ");
    }
    
    switch(choice)
    {
        case 1:
                printf("YOUR CURRENT BALANCE IS %d",bal);
                break;
        case 2: 
                
                    printf("Enter amt to withdrawn\n");
                    scanf("%d",&wid);
                    if(wid<bal)
                {
                    bal=bal-wid;
                    printf("AMOUNT WIDRAWN \nYOUR CURRENT BALANCE IS %d",bal);
                }
                else 
                {
                    printf("INSUFFICIENT BALANCE");
                }    
                break;
        case 3:
                printf("Enter amt to Deposit");
                scanf("%d",&dep);
                bal=bal+dep;
                printf("YOUR DEPOSITED AMOUNT IS %d",bal);
                break;
        default :
                printf("INVALID CHOICE");
                break;
    }
    return 0;
}