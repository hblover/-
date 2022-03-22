#define MAXSIZE 1024
#include<stdlib.h> 
typedef int ElemType;
typedef struct{
  ElemType data[MAXSIZE];
  int top;
}Stack;

// ����һ����ջS
void InitStack(Stack *s)
{
  s->top = 0;
}
//ջS���������ջ
void ClearStack(Stack *s)
{
  s->top = 0;
}
// ջSΪ���򷵻�TRUE,����FALSE
int isEmpty(Stack *s)
{
  return s->top==0;
}
// ջS���򷵻�TRUE,����FALSE
int isFull(Stack *s)
{
  return s->top>=MAXSIZE-1;
}
// ջS�����򷵻�S��Ԫ�ظ���,��ջ�ĳ���
int StackLength(Stack *s)
{
  return s->top;
}
// ջS���������Ԫ��xΪ�µ�ջ��Ԫ�أ��ֳ�Ϊ"ѹ�롱
int Push(Stack *s, ElemType x)
{
  if(isFull(s))
    return 0;
  s->data[++s->top]=x;
  return 1;
}
//ջS�����ҷǿ��򷵻�ջ��Ԫ�ص�ֵ������S��ɾ�������ֳ�"������
ElemType Pop(Stack *s)
{
  if(isEmpty(s))
    exit(-1);
  return s->data[s->top--];
}
//ջS�����ҷǿ��򷵻�S��ջ��Ԫ��
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
