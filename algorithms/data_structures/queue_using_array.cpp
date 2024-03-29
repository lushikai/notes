/**
 * 先进先出 FIFO
*/

#include <iostream>
#include "queue_using_array.hpp"

void InitQueue(SqQueue &Q) {
    Q.rear = Q.front = 0;
}

bool isEmpty(SqQueue Q) {
    if (Q.rear == Q.front) {return true;}
    else {return false;}
}

bool EnQueue(SqQueue &Q, int e) {
    if((Q.rear + 1) % MaxSize == Q.front) {return false;} //队列已满
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MaxSize; //循环队列
    return true;
}

bool DeQueue(SqQueue &Q, int &e) {
    if (Q.rear == Q.front) {return false;} //队空
    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}

bool GetHead(SqQueue Q, int &e) {
    if (Q.rear == Q.front) {return false;}
    e = Q.data[Q.front];
    return true;
}

int main() {
    SqQueue Q;
    InitQueue(Q);

    EnQueue(Q,5);
    EnQueue(Q,2);

    std::cout << isEmpty(Q);

}