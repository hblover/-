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
//初始化线性表
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
//判断线性表是否为空
int  ListEmpty(NODE node[])
{
  return node[0].data<=0;
}
//判断线性表是否已满
int  ListFull(NODE node[])
{
  return node[0].data >= MAXSIZE-1;
}
//求线性表的长度
int  ListLength(NODE node[])
{
  return node[0].data;
}
//获取线性表第idx个位置的元素
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
//获取元素e在线性表L中所在的位置(指针)       
POINTER LocateElem(NODE node[], ElemType e)
{
  int p;
  for(p=node[0].next; p!=NIL; p=node[p].next)
    if(node[p].data == e)
       return p;
  return NIL; 
} 
//求元素cur的直接前驱
POINTER  PriorElem(NODE node[], int cur)
{
  int p;
  for(p=node[0].next; p!=NIL; p=node[p].next)
    if(node[p].next==cur)
       return p;
  return NIL;
}
//求元素cur_e的直接后继
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
//在线性表L的pre后面插入元素e
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
//删除线性表pre所指向的后继元素
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
