#include <stdlib.h>
#include <stdio.h>
#include "kolejka.h"



int main(int argc, char const *argv[]) {

    struct List_element* head = NULL;
    int navigator;
    int new_value;

    do {
        printf("\nWpisz: \n1.Dodaj element na początek,\n2.Dodaj element na koniec,\n3.Usuń element z początku,\n4.Usuń element z końca,\n5.Wypisz liste,\n0.Wyjdź\n");
        scanf("%d", &navigator);

        switch (navigator) {
            case 1:
            printf("Podaj wartość jaką chcesz przypisać: \n");
            scanf("%d", &new_value);
            head = add_front_node(head, new_value);
            break;
            case 2:
            printf("Podaj wartość jaką chcesz przypisać: \n");
            scanf("%d", &new_value);
            if(head)  add_end_node(head, new_value);
            else head = add_front_node(head,new_value);
            break;
            case 3:
            if(head) head = delete_front_node(head);
            else printf("LISTA PUSTA\n");
            break;
            case 4:
            if(head) head = delete_end_node(head);
            else printf("LISTA PUSTA\n");
            break;
            case 5:
            write_out(head);
            break;
        }

    } while(navigator);

    my_free(head);


    return 0;
}
