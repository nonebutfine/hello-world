#include<stdio.h>
#include<stdlib.h>

 typedef struct Node
 {
     int data;
     struct Node* next;
 }Node,*LinkList;

void init_linklist(LinkList *l);

void main(){
    LinkList LL;
    Node aaa;
    LL=&aaa;
    printf("LL=%p\n",LL);
    printf("&LL=%p\n",&LL);
    init_linklist(&LL);
}

void init_linklist(LinkList *l){
    *l=(LinkList)malloc(sizeof(Node));
    (*l)->next=NULL;
}