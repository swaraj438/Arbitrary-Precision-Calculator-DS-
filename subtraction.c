#include "main.h"

int subtraction(Dlist *head1, Dlist *tail1,
                Dlist *head2, Dlist *tail2,
                Dlist **headR, Dlist **tailR)
{
    int borrow = 0;
    int diff;

    while (tail1)
    {
        diff = tail1->data - borrow;

        if (tail2)
        {
            diff -= tail2->data;
            tail2 = tail2->prev;
        }

        if (diff < 0)
        {
            diff += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        Dlist *new = malloc(sizeof(Dlist));

        new->data = diff;
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

        tail1 = tail1->prev;
    }

    return SUCCESS;
}
