#include <stdio.h>
#include <math.h>
int main() {
    long long int a,b,c,d;
    double s1,s2;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    s1=log(a)*b;
    s2=log(c)*d;
    if(s1>s2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
