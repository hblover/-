#define MAXSIZE 1024
#include<stdlib.h> 
typedef int ElemType;
typedef struct{
  ElemType data[MAXSIZE];
  int top;
}Stack;

// 构造一个空栈S
void InitStack(Stack *s)
{
  s->top = 0;
}
//栈S存在则清空栈
void ClearStack(Stack *s)
{
  s->top = 0;
}
// 栈S为空则返回TRUE,否则FALSE
int isEmpty(Stack *s)
{
  return s->top==0;
}
// 栈S满则返回TRUE,否则FALSE
int isFull(Stack *s)
{
  return s->top>=MAXSIZE-1;
}
// 栈S存在则返回S的元素个数,即栈的长度
int StackLength(Stack *s)
{
  return s->top;
}
// 栈S存在则插入元素x为新的栈顶元素，又称为"压入”
int Push(Stack *s, ElemType x)
{
  if(isFull(s))
    return 0;
  s->data[++s->top]=x;
  return 1;
}
//栈S存在且非空则返回栈顶元素的值，并从S中删除它，又称"弹出”
ElemType Pop(Stack *s)
{
  if(isEmpty(s))
    exit(-1);
  return s->data[s->top--];
}
//栈S存在且非空则返回S的栈顶元素
ElemType GetTop(Stack *s)
{
  if(isEmpty(s))
    exit(-1);
  return s->data[s->top];
}

int main()
{
	return 0;
}
