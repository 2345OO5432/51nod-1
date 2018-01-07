#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b))
char s[100001];
int n,sum,k=1;
int main()
{
    scanf("%s",s);
    int n=strlen(s);
    for (int i=0;i<n;++i)
    {
        if (s[i]>='A')
        {
            k=max(s[i]-'A'+10,k);
            sum+=s[i]-'A'+10;
        }
        else
        {
            k=max(k,s[i]-'0');
            sum+=s[i]-'0';
        }
    }
    for (int i=k;i<36;++i)
        if (sum%i==0)
        {
            printf("%d\n",i+1);
            return 0;
        }
    printf("No Solution\n");
    return 0;
}
