#ifndef LISTS_H
#define LISTS_H
/**
* struct list_s - single Linked list.
* @str: string - (malloc'ed string)
* @len: string length
* @next: point to next node
* Description: Node structur singly Linked list for project
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
void free_list(list_t *head);
#endif
