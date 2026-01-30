#include <stdio.h>
#include <math.h>

double division(double , double );
double modulus(int , int );
void print_menu();

int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }

        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid Menu choice.");
            continue;
        }
        

        printf("\nplease Enter the first number: ");
        scanf("%lf", &first);
        printf("Now , Enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1: //add
            result = first + second;
            break;
        case 2://sub
            result = first - second;
            break;
        case 3://mul
            result = first * second;
            break;
        case 4://div
            result = division(first, second);
            break;
        case 5://mod
            result = modulus(first, second);
            break;
        case 6://pow
            result = pow(first, second);
            break;
        }
        if (!isnan(result))
        {
            printf("\nResult of operation is: %.2f", result);
        }
        
     };
    
    return 0;
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr,"Invalid Argument for division");
        return NAN;
    } else {
        return a / b;
    }
}

double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr,"Invalid Argument for modulus");
        return NAN;
    } else {
        return a % b;
    }
}

void print_menu()
{
    printf("\n\n------------------------------------\n");
    printf("\nWelcome to the world of Calculator\n");
    printf("\nChoose one of the following options:");
    printf("\n1. Addition\n");
    printf("\n2. Subtraction\n");
    printf("\n3. Multiplication\n");
    printf("\n4. Division\n");
    printf("\n5. modulus\n");
    printf("\n6. power\n");
    printf("\n7. Exit\n");
    printf("\n Now ,enter your choice: ");
}
