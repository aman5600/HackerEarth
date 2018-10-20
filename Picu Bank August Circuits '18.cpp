#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,d,a,l,t,x,count=0,m,b,k;
    scanf("%lld",&t);
    while(t--)
    {
        l=0;
        scanf("%lld %lld %lld %lld %lld",&d,&a,&m,&b,&x);
        x=x-d;
        l=(m*a+b);
        k=x/l;
        k*=(m+1);
        n=x%l;
        n=ceil(n/(a*1.0));
        k+=n;
        printf("%lld\n",k);
    }
}