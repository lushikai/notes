#include <iostream>
#include <stdlib.h>
#include "queue_using_linked_list.hpp"

//不带头结点
// void InitQueue(LinkQueue &Q) {
//     Q.front = NULL;
//     Q.rear = NULL;
// }

// bool isEmpty(LinkQueue Q) {
//     if (Q.front == NULL) {return true;}
//     else {return false;}
// }

// void EnQueue(LinkQueue &Q, int e) {
//     LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
//     s->data = e;
//     s->next = NULL;
//     if (Q.front == NULL) {
//         Q.front = s;
//         Q.rear = s;
//     }
//     else {
//         Q.rear->next = s;
//         Q.rear = s;
//     }
// }

// bool DeQueue(LinkQueue &Q, int &e) {
//     if (Q.front == NULL) {return false;}
//     LinkNode *p = Q.front;
//     e = p->data;
//     Q.front = p->next;
//     if (Q.rear == p) {
//         Q.front = NULL;
//         Q.rear = NULL;
//     }
//     free(p);
//     return true;
// }

//带头结点
void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool isEmpty(LinkQueue Q) {
    return Q.front == Q.rear;
}

void EnQueue(LinkQueue &Q, BiTNode *e) {
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
    s->data = e;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}

bool DeQueue(LinkQueue &Q, BiTNode* &e) {
    if (Q.front == Q.rear) {return false;}
    LinkNode *p = Q.front->next;
    e = p->data;
    Q.front->next = p->next;
    if (Q.rear == p) {
        Q.rear = Q.front;
    }
    free(p);
    return true;
}

int main() {
    LinkQueue Q;
    InitQueue(Q);
}