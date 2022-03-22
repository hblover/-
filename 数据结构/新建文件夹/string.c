#define MAXLEN 1024

int StrLen(char str[])
{
   int i;
   for(i=0; str[i]!='\0'; ++i)
      ;
   return i;
}

void StrCpy(char dest[], char src[])
{
  int i;
  for(i=0; dest[i]=src[i]; ++i)
    ;
}

void StrCat(char dest[], char src[])
{
   StrCpy(dest+StrLen(dest), src);
}


//截取从start开始的长度为len的子串放入到sub中
//如果成功返回1，否则返回0 
int StrSub(char text[], int start, int len, char sub[])
{
  int realen = StrLen(text);
  int i;
  if(start<0 || (start+len)>realen)
     return 0;
  for(i=0;  i<len; ++i)
    sub[i] = text[i+start];  
  sub[i]='\0';
  return 1;    
}
//判断是否为正整数 
int isDigit(char str[])
{
   int i;
   for(i=0; str[i]; ++i)
      if(str[i]<'0'||str[i]>'9')
         return 0;
   return 1;
}
//将字符串转换成对应的正整数 
int StrToNumber(char number[])
{
   int n, i;
   if(!isDigit(number))
      return -1;
   for(n=i=0; number[i]; ++i)
     n= n*10+number[i]-'0';
   return n; 
}           

int isAlpha(char ch)
{
  return ('a'<=ch&&ch>='z') || ('A'<=ch&&ch>='Z'); 
}

//判断s1是否与s2在忽略大小写的情况下是否相等
//如果相等，返回1，否则返回0 
int StrEqualIgnCase(char s1[], char s2[])
{
   int i;
   for(i=0; s1[i]&&s2[i]; ++i)
     if(s1[i]!=s2[i])
       if(!isAlpha(s1[i]) || !isAlpha(s2[i]) || abs(s1[i]-s2[i])!=32)
           return 0; 
   return s1[i]==s2[i];   
}
//判断s1是否与s2相等
//如果相等，返回1，否则返回0 
int StrEqual(char s1[], char s2[])
{
   int i;
   for(i=0; s1[i]&&s2[i]; ++i)
     if(s1[i]!=s2[i])
        return 0; 
   return s1[i]==s2[i];   
}

//判断s1与s2的大小 
//如果s1>s2，返回大于0的值，如果s1<s2，返回小于0的值；否则返回0 
int StrCmp(char s1[], char s2[])
{
   int i;
   for(i=0; s1[i]&&s2[i]; ++i)
     if(s1[i]!=s2[i])
        return s1[i]-s2[i]; 
   return s1[i]-s2[i];   
}

int SimpleMatch(char t[], char s[])
{
  int len = StrLen(s);
  char buf[len+1];
  int i;
  for(i=0;  i<StrLen(t)-len+1; ++i)
  {
     StrSub(t,i,len,buf);
     if(StrEqual(buf,s))
        return i;
  }
  return -1;
}

int SimpleMatchPro1(char t[], char s[])
{
  int len = StrLen(s);
  int i,j;
  int matched;
  for(i=0;  i<StrLen(t)-len+1; ++i)
  {
     matched = 1;
     for(j=0; j<len && matched; ++j)
        if(t[i+j]!=s[j])
          matched=0;
     if(matched)
        return i;     
  }
  return -1;
}

int SimpleMatchPro2(char t[], char s[])
{
  int i,j;
  for(i=j=0; t[i]!='\0'&&s[i]!='\0'; )
  {
     if(t[i]==s[j])
      { i++;  j++; }
     else
      { i=i-j+1; j=0; }
  }
  if(s[j]=='\0')
     return i-j;     
  else
     return -1;
}
      
int main()
{
   char s1[128]="abcdefghigjk";  
   char s2[256]="123456";
   StrSub(s1,3,10,s2);
   puts(s2);
   return 0;
}


