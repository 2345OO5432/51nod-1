#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define maxn 50000+1
int n,f[maxn];
long long a[maxn],ans,s;
int main()
{
    scanf("%d",&n);
    int list[maxn]={0};
    for (int i=1;i<=n;++i)
    {
        scanf("%lld",&a[i]);
        while (a[list[list[0]]]>=a[i])
            --list[0];
        f[i]=i-list[list[0]]-1;
        list[++list[0]]=i;
    }
    list[0]=0;
    for (int i=n;i>=1;--i)
    {
        while (a[list[list[0]]]>=a[i])
            --list[0];
        if (list[0]==0)
        {
            list[list[0]=1]=i;
            f[i]+=n-i+1;
        }
        else
        {
            f[i]+=list[list[0]]-i;
            list[++list[0]]=i;
        }
        s=a[i]*f[i];
        ans=max(ans,s);
    }
    printf("%lld\n",ans);
    return 0;
}
