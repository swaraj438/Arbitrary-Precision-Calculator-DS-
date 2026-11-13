#include "main.h"

int addition(Dlist *head1, Dlist *tail1,
             Dlist *head2, Dlist *tail2,
             Dlist **headR, Dlist **tailR)
{
    int carry = 0;
    int sum;

    while (tail1 || tail2 || carry)
    {
        sum = carry;

        if (tail1)
        {
            sum += tail1->data;
            tail1 = tail1->prev;
        }

        if (tail2)
        {
            sum += tail2->data;
            tail2 = tail2->prev;
        }

        Dlist *new = malloc(sizeof(Dlist));

        new->data = sum % 10;
        new->prev = NULL;
        new->next = *headR;

        if (*headR)
        {
            (*headR)->prev = new;
        }

        *headR = new;

        if (*tailR == NULL)
        {
            *tailR = new;
        }

        carry = sum / 10;
    }

    return SUCCESS;
}
