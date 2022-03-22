#define arrmax 1024
#define ERROR -1
#define OK 1
typedef int  ElemType;
typedef struct  {
   ElemType space[arrmax+1];
   int top; //ջ��ָ�룬��ͬʱ����¼��ջ��Ԫ�ص���Ŀ
}Stack;

void InitStack(Stack *s) // ����һ����ջS
{
  s->top = 0;
}

int isEmpty(Stack *s) //ջSΪ���򷵻�TRUE,����FALSE
{
  return s->top<=0;
}

int isFull(Stack *s) // ջS���򷵻�TRUE,����FALSE
{
  return s->top>=arrmax;
}

int StackLength(Stack *s) //ջS�����򷵻�S��Ԫ�ظ���,��ջ�ĳ���
{
  return s->top;
}

int Push(Stack *s, ElemType x) //ջS���������Ԫ��xΪ�µ�ջ��Ԫ�أ��ֳ�Ϊ��ѹ�롱
{
  if(isFull(s))
    return ERROR;
  s->space[++s->top]=x;
  return OK;
}

ElemType Pop(Stack *s) //ջS�����ҷǿ��򷵻�ջ��Ԫ�ص�ֵ������S��ɾ�������ֳơ�������
{
  if(isEmpty(s))
     return ERROR;
  return s->space[s->top--];
}

ElemType GetTop(Stack *s) //ջS�����ҷǿ��򷵻�S��ջ��Ԫ��
{
  if(isEmpty(s))
     return ERROR;
  return s->space[s->top];
}


