/**
 * 链表不具备随机存取特性，查找只能通过顺序遍历实现
*/

#include <iostream>
#include <stdlib.h>

typedef struct DNode {
    int data;
    DNode *prior, *next;
}DNode, *DLinkList;

//带头结点
bool InitDLinkList(DLinkList &L) {
    L = (DNode *)malloc(sizeof(DNode));
    if (L == NULL) {return false;}
    L->prior = NULL;
    L->next = NULL;
    return true;
}

bool isEmpty(DLinkList L) {
    if (L->next == NULL) {return true;}
    else {return false;}
}

bool InsertNextDNode(DNode *p, DNode *s) {
    if (p == NULL || s == NULL) {return false;}
    s->next = p->next;
    if (p->next != NULL) {
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}

bool DeleteNextDNode(DNode *p) {
    if (p == NULL) {return false;}
    DNode *q = p->next;
    if (q == NULL) {return false;}
    p->next = q->next;
    if (q->next != NULL) {
        q->next->prior = p;
    }
    free(q);
    return true;
}

void DestroyList(DLinkList &L) {
    while (L->next != NULL) {
        DeleteNextDNode(L);
    }
    free(L);
    L = NULL;
}


int main() {
    DLinkList L;

    InitDLinkList(L);

}