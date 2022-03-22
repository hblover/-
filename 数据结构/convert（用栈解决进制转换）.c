#include<stdio.h>
#include "stack.h"
void convert(int num, int r, char str[]);
void StackToStr(Stack *s, char str[]);
int main()
{
  int num;
  char str[80];
  scanf("%d",&num);
  convert(num, 16, str);
  puts(str);
  return 0;
}

void convert(int num, int r, char str[])
{
    Stack s;
    InitStack(&s);
    while(num>0)
    {
      Push(&s,num%r);
      num /= r;
    } 
    StackToStr(&s, str);
}

void StackToStr(Stack *s, char str[])
{
    int n,i=0;
    char hashTab[]="0123456789ABCDEFGHIJKLMNOPQ";
    while(!isEmpty(s))
    {
      n=Pop(s);
      str[i++]=hashTab[n];
    }
    str[i]='\0';
}
