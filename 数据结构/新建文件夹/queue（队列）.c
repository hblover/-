#define MAXSIZE 1024
#define ERROR 0x80000000
typedef int  ElemType;
typedef struct{
  int front, rear;
  ElemType data[MAXSIZE];
}Queue;
//构造一个空队列Q
void InitQueue(Queue *q)
{
  q->front=q->rear=0;
} 
// 若Q为空队列则返回TRUE,否则返回FALSE
int QueueEmpty(Queue *q)
{
  return q->front==q->rear;
}
// 若队列Q满则返回TRUE,否则返回FALSE
int QueueFull(Queue *q)
{
  return q->rear+1==q->front || (q->front==0 && q->rear==MAXSIZE-1);
//  return (q->rear+1)%MAXSIZE == q->front;
}
//返回Q的元素个数,即队列的长度
int QueueLength(Queue *q)
{
    return (MAXSIZE + q->rear - q->front) % MAXSIZE;
}
// Q为非空队列,返回Q的队头元素
ElemType GetHead(Queue *q)
{
  int temp;
  if(QueueEmpty(q))
     return ERROR;
  temp = q->front+1;
  if(temp>=MAXSIZE)
    temp = 0;
  return q->data[temp]; 
}

// 队列Q存在,插入元素e为Q的队尾元素——入队列
int EnQueue(Queue *q, ElemType e)
{
   if(QueueFull(q))
     return 0;
   q->rear = (q->rear+1)%MAXSIZE;
   q->data[q->rear]=e;
   return 1;  
}
// Q为非空队列,删除Q的队头元素,并返回其值——出队列
ElemType DeQueue(Queue *q)
{
   if(QueueEmpty(q))
     return ERROR;
   q->front++;
   if(q->front>=MAXSIZE)
     q->front=0;
   return q->data[q->front];
}

int main()
{
  int i;
  Queue Q;
  InitQueue(&Q);
  for(i=0; i<MAXSIZE*2; ++i)
  {
     EnQueue(&Q,i);
     if(i%2==1)
       printf("%8d",DeQueue(&Q));
  }
  while(!QueueEmpty(&Q))
    printf("%8d",DeQueue(&Q));  
  return 0;
}
