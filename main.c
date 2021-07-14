/**
 * Linked List with C language programming
 *
 * author: David Gaspar <davidgaspar.dev@gmail.com>
 */
#include <stdio.h>

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


int main(int argc, const char ** argv) {
  node_t n1, n2, n3, n4;
  node_t * head;

  n1.value = 1960;
  n2.value = 1965;
  n3.value = 1970;
  n4.value = 1975;

  head = &n4;
  n4.next = &n3;
  n3.next = &n2;
  n2.next = &n1;
  n1.next = NULL;

  print_linked_list(head);

  return 1;
}
