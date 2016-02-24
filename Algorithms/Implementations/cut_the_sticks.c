#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head)
{
    node_t * current = head;

    while (current !=NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int count_list(node_t * head)
{
    node_t * current = head;
    int count = 0;

    while(current !=NULL)
    {
        count +=1;
        current = current->next;
    }
    return count;
}

int min_list(node_t * head)
{
    node_t * current = head;
    int min = INT_MAX;
    while(current != NULL)
    {
        if (current->val < min)
        {
            min = current->val;
        }
        current = current->next;
    }
    return min;
}

void add_to_list(node_t ** head, int value)
{
    if (*head == NULL)
    {
        *head =  malloc(sizeof(node_t));
        (*head)->val = value;
        (*head)->next = NULL;
    } else
    {
        node_t * current = *head;
        while(current->next !=NULL)
        {
            current = current -> next;
        }
        current->next = malloc(sizeof(node_t));
        current->next->val = value;
        current->next->next = NULL;
    }
}

int remove_first_item(node_t ** head)
{
    int retval = -1;
    node_t * next_node = NULL;

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

// we are passing a pointer to the pointer itself(a double pointer) so we can
// modify the pointer itself
int remove_by_index(node_t ** head, int n)
{
    int i = 0;
    int retval = -1;
    node_t * current = *head;
    node_t * temp_node = NULL;

    if (n==0)
    {
        return remove_first_item(head);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (current->next == NULL){
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);
    return retval;
}

bool filter(int value)
{
    if (value <=0)
    {
        return false;
    } else {
        return true;
    }
}

void remove_by_boolean(node_t ** head, bool( * filter)(int))
{
    int removed_count = 0;
    int loop_count = 0;
    node_t * current = *head;
    while(current != NULL)
    {
        if (!(filter(current->val)))
        {
            remove_by_index(head, loop_count - removed_count); 
            removed_count +=1;
        }
        current = current-> next;
        loop_count +=1;
    } 
}

int main()
{
    // set up a linked list
    node_t * head = NULL;
    
    int number_of_sticks;
    scanf("%d", &number_of_sticks);

    int val;
    for(int i = 0; i < number_of_sticks; i++)
    {
        scanf("%d", &val);
        add_to_list(&head, val);
    }

    int count = count_list(head);     
    int min = min_list(head);

    while (count > 0)
    {
        printf("%d\n", count);
        min = min_list(head);
        node_t * current = head; 
        while(current != NULL)
        {
            current->val = current->val - min;
            current = current->next;
        }
        remove_by_boolean(&head, filter);
        count = count_list(head);
    }
    return 0;
}
