struct List_element{
    int value;
    struct List_element* next;
};

struct List_element* add_front_node(struct List_element *, int);

void my_free(struct List_element*);

void add_end_node(struct List_element *, int);

void write_out(struct List_element *);

struct List_element* delete_front_node(struct List_element *);

struct List_element* delete_end_node(struct List_element*);
