#include "main.h"

int multiplication(Dlist *head1, Dlist *tail1,
                   Dlist *head2, Dlist *tail2,
                   Dlist **headR, Dlist **tailR)
{
    long long num1 = 0;
    long long num2 = 0;

    while (head1)
    {
        num1 = num1 * 10 + head1->data;
        head1 = head1->next;
    }

    while (head2)
    {
        num2 = num2 * 10 + head2->data;
        head2 = head2->next;
    }

    long long result = num1 * num2;

    char str[100];

    sprintf(str, "%lld", result);

    create_list(headR, tailR, str);

    return SUCCESS;
}
