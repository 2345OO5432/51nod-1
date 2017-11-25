//practising RMQ
#include <cstdio>
#include <cmath>
int f[10001][16],n,q;
inline int max(int a,int b)
{
	if (a>b)
		return a;
	return b;
}
void preDeal()
{
	for (int k=1;(1<<k)<=n;++k)
		for (int i=1;i+(1<<k)-1<=n;++i)
			f[i][k]=max(f[i][k-1],f[i+(1<<(k-1))][k-1]);
}
int RMQ(int from,int to)
{
	int temp=to-from+1,x=temp&(-temp);
	if (x==temp)
		return f[from][(int)log2(x)];
	else
		return max(f[from][(int)log2(x)],RMQ(from+x,to));
}
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;++i)
		scanf("%d",&f[i][0]);
	preDeal();
	scanf("%d",&q);
	while (q--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",RMQ(a+1,b+1));
	}
	return 0;
}
