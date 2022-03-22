#include<stdio.h>
typedef int ElemType;
typedef struct Node{
  ElemType data;
  struct Node *next;
}NODE, HEAD;
void  InitList(HEAD *head)
{
   head->data=0;
   head->next=NULL;
} 
//�������Ա�
void DestroyList(HEAD *head)
{
  while(head->data>0) 
    ListDelete(head,head);
}
//�ж����Ա��Ƿ�Ϊ��
int ListEmpty(HEAD *head)
{
   return head->data==0;
}
//�ж����Ա��Ƿ�����
int ListFull(HEAD *head)
{
  return 0;  
}
//�����Ա�ĳ���
int ListLength(HEAD *head)
{
  return head->data;
}

//��ȡ���Ա��idx��λ�õ�Ԫ�ص�ָ�� 
NODE *GetElem(HEAD *head, int idx)
{
  int i;
  NODE *p;
  if(idx<=0 || idx>head->data)
    return NULL;
  p = head->next; 
  for(i=1; i<idx; ++i)
    p = p->next; 
  return p;
}
//����Ԫ��e�����Ա������ڵĽڵ��ָ�� 
NODE *LocateElem(HEAD *head, ElemType e)
{
   NODE *p;
   for(p=head->next; p!=NULL; p=p->next)
   {
      if(p->data==e)
        return p;
   }
   return NULL;
}

//��Ԫ��cur��ֱ��ǰ��
NODE *PriorElem(HEAD *head, NODE *cur)
{
   NODE *pre;
   for(pre=head; pre!=NULL; pre=pre->next)
    if(pre->next==cur)
       return pre;
   return NULL;   
}
//��Ԫ��cur��ֱ�Ӻ��
NODE *NextElem(HEAD *head, NODE *cur)
{
  if(cur!=NULL)
    return cur->next;
  else
    return NULL;
}
//�����Ա�Ľڵ�pre�������Ԫ��e
int ListInsert(HEAD *head, NODE *pre, ElemType e)
{
   NODE *work;
   work = (NODE *)malloc(sizeof(NODE));
   if(work==NULL)
     return 0;
   work->data = e;
   work->next = pre->next;
   pre->next = work;
   head->data++;
   return 1;  
} 
//ɾ�����Ա��е�pre֮����Ǹ��ڵ� 
int ListDelete(HEAD *head, NODE *pre)
{
   NODE *del;
   if(pre==NULL) 
     return 0;
   del = pre->next;
   if(del==NULL)
     return 0;
   pre->next = del->next;
   free(del);
   head->data--;
   return 1;
}

int main()
{
  HEAD h;
  InitList(&h);
  printf("data=%d, next=%p",h.data,h.next);
  return 0;
} 
