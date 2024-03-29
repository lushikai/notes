/**
 * 中缀转后缀：左优先原则，只要左边的运算符能先计算，就优先算左边的
 * 中缀转前缀：右优先原则，只要右边的运算符能先计算，就优先算右边的
 * 后缀表达式计算：从左往右扫描，先出栈的是右操作数
 * 前缀表达式计算：从右往左扫描，先出栈的是左操作数
 * 中缀表达式计算：初始化两个栈，操作数栈和运算符栈；若扫描到操作数，压入操作数栈；
 * 若扫描到运算符或界限符，则按照中缀转后缀相同的逻辑压入运算符栈，
 * 每当弹出一个运算符时，就需要再弹出两个操作数栈的栈顶元素并执行相应的运算，
 * 运算结果再压回操作数栈
*/


#include "stack_using_array.hpp"

