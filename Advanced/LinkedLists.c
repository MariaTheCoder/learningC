/*
L I N K E D   L I S T S 

- best and simplest example of a dynamic data structure that uses pointers for its implementation
- easy to understand once one understands how pointers work
- easy to understand once one understands dynamic memory allocation and structures

Advantages of linked lists (over arrays) 
1. Items can be added or removed from the middle of the list
2. There is no need to define an initial size

Disadvantages of linked lists (over arrays) 
1. No 'random' access. It is impossible to reach the nth item in the array without first iterating over all items up until that item. 
  This means we have to start from the beginning of the list and count how many times we advance in the list until we get to the desired item. 
2. Dynamic memory allocation and pointers are required which complicates the code and increases the risk of memory leaks and segment faults. 
3. Linked lists have a much larger overhead over arrays, since linked list items are dynamically allocated (which is less efficient in memory 
  usage) and each item in the list also must store an additional pointer 


*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int val;
  struct node *next;
} node_t;

void print_list(node_t *head)
{
  node_t *current = head;

  while (current != NULL)
  {
    printf("%d\n", current->val);
    current = current->next;
  }
}

int pop(node_t **head)
{
  int retval = -1;
  node_t *next_node = NULL;

  if (*head == NULL)
  {
    return -1;
  }

  next_node = (*head)->next;
  retval = (*head)->val;
  free(*head);
  *head = next_node;

  return retval;
}

int remove_by_value(node_t **head, int val)
{
  /* TODO: fill in your code here */
  int retval = -1;
  node_t *current = *head;
  node_t *temp_node = NULL;

  if (current->val == val)
  {
    return pop(head);
  }

  while (current->next != NULL)
  {
    if (current->next->val == val)
    {
      current = current->next;
      free(current);
      return 0;
    }
  }

  temp_node = current->next;
  retval = temp_node->val;
  current->next = temp_node->next;
  free(temp_node);

  return retval;
}

int main()
{

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  remove_by_value(&test_list, 2);

  print_list(test_list);
}