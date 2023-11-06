#include <stdio.h>
int main() {
     long long int a,b,c;
     scanf("%lld%lld",&a,&b);
     c=a+b;
     printf("%lld + %lld = %lld\n",a,b,c);
     c=a*b;
     printf("%lld * %lld = %lld\n",a,b,c);
     c=a-b;
     printf("%lld - %lld = %lld\n",a,b,c);
 
    return 0;
}
