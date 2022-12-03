#include <stddef.h>
#include <stdbool.h>
#include "ll_cycle.h"

bool ptr_add_by_one(node **ptr)
{
    if (*ptr == NULL)
    {
        return false;
    }
    *ptr = (*ptr) -> next;
    return true;
}

bool ptr_add_by_two(node **ptr)
{
    if (ptr_add_by_one(ptr))
    {
        return ptr_add_by_one(ptr);
    }
    return false;
}

int ll_has_cycle(node *head)
{
    node *fast_ptr = head;
    node *slow_ptr = head;
    while (ptr_add_by_two(&fast_ptr) && ptr_add_by_one(&slow_ptr))
    {
        if (fast_ptr == slow_ptr)
        {
            return true;
        }
    }
    return false;
}
