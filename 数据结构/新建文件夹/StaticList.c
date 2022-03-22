#define MAXSIZE 1024
#define ERROR 0x80000000
#include<stdio.h>
#define NIL 0
typedef int ElemType;
typedef int POINTER;
typedef struct {
   ElemType  data;
   POINTER   next;
}NODE;

NODE node[MAXSIZE];
//��ʼ�����Ա�
void InitList(NODE node[])
{
   node[0].data = 0;
   node[0].next = NIL;
   int i;
   for(i=1;i<MAXSIZE;++i)
     node[i].next = -1;
}
void DestroyList(NODE node[])
{
   node[0].data = 0;
   node[0].next = NIL;
}
//�ж����Ա��Ƿ�Ϊ��
int  ListEmpty(NODE node[])
{
  return node[0].data<=0;
}
//�ж����Ա��Ƿ�����
int  ListFull(NODE node[])
{
  return node[0].data >= MAXSIZE-1;
}
//�����Ա�ĳ���
int  ListLength(NODE node[])
{
  return node[0].data;
}
//��ȡ���Ա��idx��λ�õ�Ԫ��
ElemType GetElem(NODE node[],int idx)
{
  int i, p;
  if(idx<=0 || idx>node[0].data)
    return ERROR;
  p = 0;
  for(i=0; i<idx; ++i)
    p = node[p].next;  //p=p->next;
  return node[p].data; 
}
POINTER GetPointer(NODE node[],int idx)
{
  int i, p;
  if(idx<=0 || idx>node[0].data)
    return ERROR;
  p = 0;
  for(i=0; i<idx; ++i)
    p = node[p].next;  //p=p->next;
  return p; 
}
//��ȡԪ��e�����Ա�L�����ڵ�λ��(ָ��)       
POINTER LocateElem(NODE node[], ElemType e)
{
  int p;
  for(p=node[0].next; p!=NIL; p=node[p].next)
    if(node[p].data == e)
       return p;
  return NIL; 
} 
//��Ԫ��cur��ֱ��ǰ��
POINTER  PriorElem(NODE node[], int cur)
{
  int p;
  for(p=node[0].next; p!=NIL; p=node[p].next)
    if(node[p].next==cur)
       return p;
  return NIL;
}
//��Ԫ��cur_e��ֱ�Ӻ��
POINTER  NextElem(NODE node[],  int cur)
{
  return node[cur].next;
}

POINTER myMalloc(NODE node[])
{
  int i;
  for(i=1;i<MAXSIZE-1;++i)
   if(node[i].next==-1)
     return i;
  return 0;
}
//�����Ա�L��pre�������Ԫ��e
int ListInsert(NODE node[], POINTER pre, ElemType e)
{
   int p;
   if(node[0].data>=MAXSIZE-1)
     return 0;
   p = myMalloc(node);
   node[p].data = e;
   node[p].next = node[pre].next;
   node[pre].next = p;
   node[0].data++;
   return 1;
}
int myFree(POINTER work)
{
  if(work<=0 || work >=MAXSIZE)
    return 0;
  node[work].next = -1;
  return 1;
}
//ɾ�����Ա�pre��ָ��ĺ��Ԫ��
int  ListDelete(NODE node[], POINTER pre)
{
  POINTER work;
  if(pre<=0 || pre>=MAXSIZE || ListEmpty(node))
    return 0;
  work = node[pre].next;
  if(work<=0)
    return 0;
  node[pre].next = node[work].next;
  myFree(work);
  node[0].data--;
  return 1;   
} 

int main()
{
  return 0;
}
