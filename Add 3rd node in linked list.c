//Method 1 : need unnessary memory
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
 int data;
 struct node *link;
};

int main()
{

 struct node *head = malloc(sizeof(struct node));
 head->data = 13;
 head->link = NULL;

 struct node *current = malloc(sizeof(struct node));
 current->data = 93;
 current->link = NULL;

 head->link=current;

 struct node *current2 = malloc(sizeof(struct node));
 current2->data = 1;
 current2->link = NULL;

 current->link = current2;

getch();

}

