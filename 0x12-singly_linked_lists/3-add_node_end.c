#include "lists.h"
/**
 * add_node_end - adds node to the end of the list
 * @head: head of the node
 * @str: string
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newmode, *tmp;
	unsigned int i, count = 0;

	newmode = malloc(sizeof(list_t));
	if (newmode == NULL)
		return (NULL);
	newmode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newmode->len = count;
	newmode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newmode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newmode;
	}
	return (*head);
}
