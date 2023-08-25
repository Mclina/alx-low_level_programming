0x12. C - Singly linked lists

Singly_Linked_List_in_C_1.

A Singly linked list is a collection of data called nodes, where each node is divided into two parts to store data and address at some random addresses. The pointer next, points to the address of the next node in a list.

Compared to the array data structure, the size of the linked list elements is not fixed. Due to this, there is an efficient memory utilization in a singly linked list.
Implementing a singly linked list to perform operations like insertion and deletion is easy.
Elements are accessed easily in a singly linked list.
Let's understand the singly linked list practically with the help of a simple program.

Program to Implement a Singly Linked List in C.
#include <stdio.h>

#include <stdlib.h>

void display();

struct Node {

int data;

struct Node* next;

};

int main()

{

struct Node* first;

struct Node* second;

struct Node* third;

struct Node* fourth;

first = (struct Node*)malloc(sizeof(struct Node));

second = (struct Node*)malloc(sizeof(struct Node));

third = (struct Node*)malloc(sizeof(struct Node));

fourth = (struct Node*)malloc(sizeof(struct Node));

first->data = 10; 

second->data = 20;

third->data = 30;

fourth->data = 40;

         first->next = second;

         second->next = third;

third->next = fourth;

fourth->next = NULL;

display(first);

return 0;

}

void display(struct Node* ptr)

{

while (ptr != NULL) {

                   printf(

printf(" %d ", ptr->data);

ptr = ptr->next;

}

}

Output:



Tasks

0-print_list.c: Writing a function that prints all the elements of a list_t list. Prototype: size_t print_list(const list_t *h); Return: the number of nodes. Format: see example. If str is NULL, print [0] (nil). You are allowed to use printf.

1-list_len.c: Writing a function that returns the number of elements in a linked list_t list. Prototype: size_t list_len(const list_t *h);

2-add_node.c: Writing a function that adds a new node at the beginning of a list_t list. Prototype: list_t *add_node(list_t **head, const char *str); Return: the address of the new element, or NULL if it failed. str needs to be duplicated. You are allowed to use strdup.

3-add_node_end.c: Writing a function that adds a new node at the end of a list_t list. Prototype: list_t *add_node_end(list_t **head, const char *str); Return: the address of the new element, or NULL if it failed. str needs to be duplicated. You are allowed to use strdup.

4-free_list.c: Writing a function that frees a list_t list. Prototype: void free_list(list_t *head);

100-first.c: Writing a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed. You are allowed to use the printf function.

101-hello_holberton.asm: Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line. You are only allowed to use the printf function. You are not allowed to use interrupts. Your program will be compiled using nasm and gcc:
