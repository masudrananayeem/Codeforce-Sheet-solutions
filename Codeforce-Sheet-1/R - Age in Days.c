#include <stdio.h>
int main() {
   long long int n,y,m,d;
    scanf("%lld",&n);
    y=n/365;
    printf("%lld years\n",y);
    n=(n-(365*y));
    m=n/30;
    printf("%lld months\n",m);
    n=(n-(30*m));
    d=n;
    printf("%lld days\n",d);
    return 0;
}
