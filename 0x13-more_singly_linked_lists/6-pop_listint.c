#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list, and returns
 *the head node’s data (n)
 *@head: pointer to the linked list's head
 *Return: the value of the head node's data
 */
int pop_listint(listint_t **head) {
    if (*head == NULL) {
        return 0;  // return 0 if the linked list is empty
    }

    int data = (*head)->n;  // store the data of the head node
    listint_t *temp = *head;  // store a pointer to the head node
    *head = (*head)->next;  // update the head pointer to the next node
    free(temp);  // free the memory occupied by the old head node
    return data;  // return the data of the old head node
}
