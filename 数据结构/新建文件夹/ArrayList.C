#define maxlen 1024
#define ERROR  0X80000000
typedef int ElemType; //这里可以把int改成任意类型
typedef struct{
  ElemType elem[maxlen]; //C语言规定从0号元素放起
  int      realen; //实际存放的数目
}List;

//初始化线性表
void InitList(List *L){
  L->realen = 0;
}
//判断线性表是否为空
int ListEmpty(List *L){
	return L->realen<=0;  //健壮性更好 
}
//判断线性表是否已满         
int ListFull(List *L){
	return L->realen>=maxlen;
}
//求线性表的长度  时间复杂度O(1)       
int ListLength(List *L){
	 return L->realen;
} 
//获取线性表L第idx个位置的元素   时间复杂度O(1) 随机存储    
ElemType GetElem(List *L, int idx){
	if(idx<0 || idx>=L->realen)
		 return ERROR;
	else
		 return L->elem[idx];
}
//获取元素e在线性表L中所在的位置，时间复杂度O(n)  
int LocateElem(List *L, ElemType e){
	int i;
	for(i=0; i<L->realen; ++i)
	  if(L->elem[i]==e)
	  	 return i;
	return -1;
}
//求位序idx的直接前驱
ElemType PriorElem(List *L, int idx){
	if(idx<=0 || idx>=L->realen)
		 return ERROR;
	else
		 return L->elem[idx-1];
}
//求位序idx的直接后继
ElemType NextElem(List *L, int idx){
	if(idx<0 || idx>=L->realen)
		 return ERROR;
	else
		 return L->elem[idx+1];
}
//此函数将元素e插入指定位置idx
//基本操作都只是一个约定，并没有一个统一的必须遵守的规范 
//基本思路：从后面往前面操作 时间复杂度O(n) 
int ListInsert(List *L, int idx, ElemType e){
  int k;
  if ((idx<0)||(idx>L->realen)||ListFull(L))  
        return 0;
  for (k=L->realen+1;k>idx;k--)
     L->elem[k]=L->elem[k-1];
  L->elem[idx]=e; 
  L->realen++;
  return 1;
}     
 
//删除线性表L第idx个位置的元素 ,从前往后操作 
int ListDelete(List *L, int idx){
	int k;
	if ((idx<0) || (idx>=L->realen) || L->realen<=0)
       return 0;
    for (k=idx;k<L->realen-1;k++)
       L->elem[k]=L->elem[k+1];
    L->realen--;
    return 1;
}      
