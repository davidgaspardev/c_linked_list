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
    printf("%d - ", tmp->value);
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


int main(int argc, const char ** argv) {
  node_t * head;
  node_t * tmp;

  tmp = create_new_node(2);
  head = tmp;
  tmp = create_new_node(4);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(8);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(16);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(32);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(64);
  tmp->next = head;
  head = tmp;
  tmp = create_new_node(128);
  tmp->next = head;
  head = tmp;

  print_linked_list(head);

  return 1;
}
