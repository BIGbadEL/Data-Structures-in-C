#include <stdlib.h>
#include <stdio.h>
#include "kolejka.h"

struct List_element* add_front_node(struct List_element *head, int new_value){
    struct List_element* new_element = malloc(sizeof(struct List_element));
    new_element->value = new_value;
    new_element->next = head;
    return new_element;
}

void my_free(struct List_element* head){
    if(head->next){
        my_free(head->next);
    }
    free(head);
}

void add_end_node(struct List_element *head, int new_value){
    struct List_element *temp;
    while(head){
        temp = head;
        head = head->next;
    }
    temp->next = malloc(sizeof(struct List_element));
    temp->next->value = new_value;
}

void write_out(struct List_element *head){
    while (head) {
        printf("%d\t", head->value);
        head = head->next;
    }
}

struct List_element* delete_front_node(struct List_element * head){
    struct List_element *temp = head->next;
    free(head);
    return temp;
}

struct List_element* delete_end_node(struct List_element* head){

    struct List_element* temp = head;
    if(head->next == NULL) return delete_front_node(head);

    while (head->next->next) {
        head = head->next;
    }

    free(head->next);
    head->next = NULL;

    return temp;
}
