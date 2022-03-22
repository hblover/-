#include <stdio.h>
#include<stdlib.h>
int s[30003],q[30003];
int ans,n;
int camp(const void *a,const void *b)
{ //int类型排序 ,从小到大排序 
	int s1 = *(int *)a; 
	int s2 = *(int *)b;
	if(s1!=0&&s2!=0)
	{
	if(s1>s2)
		return 1;
	else if(s1==s2)
		return 0;
	else
		return -1;
	}
}
int main()
{
	scanf("%d",&n);
	int i, op = 0, l = 0, r = -1,a,b;
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	qsort(s,2*n-1,sizeof(int),camp);
	ans = 0;
	for (i = 1; i < n; ++i)
	{
		if(op < n && l <= r)
		{
			if(s[op] < q[l]) a = s[op++];
			else a = q[l++];
		}
		else if(op < n) a = s[op++];
		else a = q[l++];
		if(op < n && l <= r)
		{
			if(s[op] < q[l]) b = s[op++];
			else b = q[l++];
		}
		else if(op < n) b = s[op++];
		else b = q[l++];
		q[++r] = a + b;
		ans += a + b;
	}
	printf("%d\n", ans);
	return 0;
}
