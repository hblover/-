#define MAXSIZE 1024
#define ERROR 0x80000000
typedef int  ElemType;
typedef struct{
  int front, rear;
  ElemType data[MAXSIZE];
}Queue;
//����һ���ն���Q
void InitQueue(Queue *q)
{
  q->front=q->rear=0;
} 
// ��QΪ�ն����򷵻�TRUE,���򷵻�FALSE
int QueueEmpty(Queue *q)
{
  return q->front==q->rear;
}
// ������Q���򷵻�TRUE,���򷵻�FALSE
int QueueFull(Queue *q)
{
  return q->rear+1==q->front || (q->front==0 && q->rear==MAXSIZE-1);
//  return (q->rear+1)%MAXSIZE == q->front;
}
//����Q��Ԫ�ظ���,�����еĳ���
int QueueLength(Queue *q)
{
    return (MAXSIZE + q->rear - q->front) % MAXSIZE;
}
// QΪ�ǿն���,����Q�Ķ�ͷԪ��
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

// ����Q����,����Ԫ��eΪQ�Ķ�βԪ�ء��������
int EnQueue(Queue *q, ElemType e)
{
   if(QueueFull(q))
     return 0;
   q->rear = (q->rear+1)%MAXSIZE;
   q->data[q->rear]=e;
   return 1;  
}
// QΪ�ǿն���,ɾ��Q�Ķ�ͷԪ��,��������ֵ����������
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
