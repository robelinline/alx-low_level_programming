#include "lists.h"

/**
* print_list - prints the list
* @h:points to the list of elements
*Return: num of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;
while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
count += 1;
cursor = cursor->next;
}
return (count);
}
