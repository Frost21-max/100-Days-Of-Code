#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("Result = %d\n", a + b);
        break;
    case '-':
        printf("Result = %d\n", a - b);
        break;
    case '*':
        printf("Result = %d\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result = %d\n", a / b);
        else
            printf("Division by zero not allowed\n");
        break;
    case '%':
        if (b != 0)
            printf("Result = %d\n", a % b);
        else
            printf("Division by zero not allowed\n");
        break;
    default:
        printf("Invalid Operator\n");
    }
    return 0;
}
