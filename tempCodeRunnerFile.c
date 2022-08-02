#include <stdio.h>
int main()
{
    int num1,num2,operator;
    printf("Please input the first number : ");
    scanf("%d",&num1);
    printf("Please input the second number : ");
    scanf("%d",&num2);
    printf("Please input an operator : ");
    scanf("%s",&operator);
    switch (operator)
    {
    case '+':
        printf("%d",(num1 + num2));
        break;
    case '-':
        printf("%d",num1 - num2);
        break;
    case '*':
        printf("%d",num1 * num2);
        break;
    case '/':
        printf("%d",num1 / num2);
        break;
    default:
        printf("Error");
    }

    return 0;
}