/**
 * 用数组的方式实现链表
 * 增删不需要移动大量元素
 * 不能随机存取，只能从头结点开始往后查找
 * 容量固定不可变
*/

#include <iostream>
#define MaxSize 10

// struct Node {
//     int data;
//     int next;
// };

typedef struct {
    int data;
    int next; //下一个元素数组下标
} SLinkList[MaxSize];


int main() {

    // struct Node a[MaxSize];

    SLinkList b;

}