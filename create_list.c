#include "main.h"

void create_list(Dlist **head, Dlist **tail, char *num)
{
    int i;

    for (i = 0; num[i] != '\0'; i++)
    {
        insert_at_last(head, tail, num[i] - '0');
    }
}
