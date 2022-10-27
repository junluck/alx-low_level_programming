#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	typedef struct listint_s *next;
}listint_t;
/** 
 *print_listint - Entry point for the print_listint function
 *
 *@h:Head of the linked list
 *
 *Description: Printing out a linked list
 *
 *return (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	int count;

	while(h -> next != NULL)
	{
		count++;
		h = h -> next;
	}
	return(printf("%i",count));

}


