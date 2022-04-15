#ifndef __STAKC_H__
#define __STACK_H__

typedef unsigned long Item;//别名 方便移植

class Stack//声明
{
	private://成员变量
		enum {MAX = 10};//也可以使用static
		Item items[MAX];
		int top;//栈顶指针
	public://接口声明
		Stack();
		bool isempty() const;//不改变const
		bool isfull() const;
		bool push(Item &item);
		bool pop(Item &item);
};

#endif