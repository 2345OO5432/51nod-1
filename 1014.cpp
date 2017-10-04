#include <iostream>
#include <cmath>
using namespace std;
int p,a,s;
void deal()
{
	unsigned long long temp=a;
	while (1)
	{
		unsigned long long x=(unsigned long long)sqrt(temp);
		if (x>p)
			break;
		if (x*x==temp)
		{
			++s;
			cout << x << ' ';
		}
		temp+=p;
	}
}
int main()
{
	cin >> p >> a;
	deal();
	if (s==0)
		cout << "No Solution";
	cout << '\n';
	return 0;
}
