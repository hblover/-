#define arrmax 1024
#define ERROR -1
#define OK 1
typedef int  ElemType;
typedef struct  {
   ElemType space[arrmax+1];
   int top; //栈顶指针，它同时还记录了栈中元素的数目
}Stack;

void InitStack(Stack *s) // 构造一个空栈S
{
  s->top = 0;
}

int isEmpty(Stack *s) //栈S为空则返回TRUE,否则FALSE
{
  return s->top<=0;
}

int isFull(Stack *s) // 栈S满则返回TRUE,否则FALSE
{
  return s->top>=arrmax;
}

int StackLength(Stack *s) //栈S存在则返回S的元素个数,即栈的长度
{
  return s->top;
}

int Push(Stack *s, ElemType x) //栈S存在则插入元素x为新的栈顶元素，又称为“压入”
{
  if(isFull(s))
    return ERROR;
  s->space[++s->top]=x;
  return OK;
}

ElemType Pop(Stack *s) //栈S存在且非空则返回栈顶元素的值，并从S中删除它，又称“弹出”
{
  if(isEmpty(s))
     return ERROR;
  return s->space[s->top--];
}

ElemType GetTop(Stack *s) //栈S存在且非空则返回S的栈顶元素
{
  if(isEmpty(s))
     return ERROR;
  return s->space[s->top];
}


