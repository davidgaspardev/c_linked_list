/**
 * Linked List with C language programming
 *
 * author: David Gaspar <davidgaspar.dev@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  /* data */
  int value;
  struct node * next;
} node_t;

void print_linked_list(node_t * head) {
  node_t * tmp = head;
  while (tmp != NULL) {
    /* code */
    printf("(%p) %d\n", tmp, tmp->value);
    tmp = tmp->next;
  }
  printf("\n");
}

node_t * create_new_node(int value) {
  node_t * new_node = malloc(sizeof(node_t));
  (* new_node).value = value;
  (* new_node).next = NULL;
  return new_node;
}

void insert_at_head(node_t ** head, node_t * new_head) {
  (* new_head).next = *head;
  *head = new_head;
  // return new_head;
}

node_t * find_node(node_t * head, int value) {
  node_t * tmp = head;
  while (tmp != NULL) {
    if(tmp->value == value) return tmp;
    tmp = tmp->next;
  }
  return NULL;
}


int main(int argc, const char ** argv) {
  node_t * head;
  node_t * tmp;

  for(int i = 0; i <= 50; i++) {
    tmp = create_new_node(i);
    insert_at_head(&head, tmp);
  }

  node_t * found = find_node(head, 44);

  printf("(%p) %d - found\n", found, found->value);

  print_linked_list(head);

  return 1;
}
