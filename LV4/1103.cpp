#include <cstdio>
int n,a,b,all,head[50001],next[50001],v[50001];
long long s[50001];
void add(int x,int pos)
{
    next[++all]=head[x];
    head[x]=all;
    v[all]=pos;
}
void deal()
{
    if (head[0])
    {
        a=0;
        b=v[head[0]];
        return;
    }
    for (int i=1;i<=n;++i)
    {
        if (next[head[i]])
        {
            a=v[next[head[i]]];
            b=v[head[i]];
            return;
        }
    }
}
int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;++i)
    {
        scanf("%lld",&s[i]);
        s[i]+=s[i-1];
        add(s[i]%n,i);
    }
    deal();
    printf("%d\n",b-a);
    for (int i=a+1;i<=b;++i)
        printf("%lld\n",s[i]-s[i-1]);
    return 0;
}
