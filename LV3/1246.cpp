#include <cstdio>
int n,k,c,ans;
int main()
{
    scanf("%d%d%d",&n,&k,&c);
    if (k<n)
        ans=n-k+c;
    else if (k%n==0)
        ans=c;
    else
        ans=(c>k/n*n?c+n-k/(k/n+1):c);
    printf("%d\n",ans);
    return 0;
}
