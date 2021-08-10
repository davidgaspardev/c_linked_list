#ifndef USER_H_
#define USER_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct user {
    /* data */
    char * nickname;
    char * fullname;
    unsigned long int phone;
    unsigned long int birthdate;

    struct user * next;
    struct user * previous;
} user_t;

/**
 * Create a user in the memory stack.
 */
user_t * create_new_user(user_t user) {
    user_t * new_user = malloc(sizeof(user_t));
    *new_user = user;

    (*new_user).next = NULL;
    (*new_user).next = NULL;

    return new_user; 
}

/**
 * The new user that will be added will also be the head of the 
 * linked list.
 */
void insert_user_at_head(user_t ** head, user_t * new_user) {
    (* head)->previous = new_user;
    (* new_user).next = *head;
    *head = new_user;
}

void print_user_linked_list(user_t * head) {
    user_t * tmp = head;
    while (tmp != NULL) {
        
        printf("\n- [ %p | %p ] nickname: %s", tmp, &tmp->nickname, tmp->nickname);
        printf("\n- [ %p | %p ] fullname: %s", tmp, &tmp->fullname,tmp->fullname);
        printf("\n- [ %p | %p ] phone: %lu", tmp, &tmp->phone, tmp->phone);
        printf("\n- [ %p | %p ] birthdate (timestamp): %lu", tmp, &tmp->birthdate, tmp->birthdate);
        if(tmp->previous != NULL) 
        printf("\n- [ %p | %p ] previous: %p", tmp, &tmp->previous, tmp->previous);
        if(tmp->next != NULL)
        printf("\n- [ %p | %p ] next: %p", tmp, &tmp->next, tmp->next);

        // Break line between users
        printf("\n");

        tmp = tmp->next;
    }
    // Break line in end
    printf("\n");
}

#endif