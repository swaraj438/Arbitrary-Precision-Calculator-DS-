/*  Name : swaraj a s
    Batch:25040B
    Title: Inverted search
    Date :17/03/2026
    Descrption :APC (Arbitrary Precision Calculator) is used to perform arithmetic operations on very large numbers that cannot be stored using normal data types.
The project uses doubly linked lists to store and process each digit dynamically.
It supports operations like addition, subtraction, multiplication, and division.
This project demonstrates linked list manipulation and dynamic memory allocation in C.

*/



#include "main.h"

int main()
{
    Dlist *head1 = NULL, *tail1 = NULL;
    Dlist *head2 = NULL, *tail2 = NULL;
    Dlist *headR = NULL, *tailR = NULL;

    char num1[100], num2[100];
    char operator;

    printf("Enter number 1 : ");
    scanf("%s", num1);

    printf("Enter number 2 : ");
    scanf("%s", num2);

    printf("Enter operator (+,-,*,/) : ");
    scanf(" %c", &operator);

    create_list(&head1, &tail1, num1);
    create_list(&head2, &tail2, num2);

    switch (operator)
    {
        case '+':
            addition(head1, tail1,
                     head2, tail2,
                     &headR, &tailR);
            break;

        case '-':
            subtraction(head1, tail1,
                        head2, tail2,
                        &headR, &tailR);
            break;

        case '*':
            multiplication(head1, tail1,
                           head2, tail2,
                           &headR, &tailR);
            break;

        case '/':
            division(head1, tail1,
                     head2, tail2,
                     &headR, &tailR);
            break;

        default:
            printf("Invalid operator\n");
            return 0;
    }

    printf("Result : ");
    print_list(headR);

    return 0;
}
