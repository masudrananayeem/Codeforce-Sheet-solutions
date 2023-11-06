#include <stdio.h>
 
int main() {
    long long int a,b;
    char s;
    scanf("%lld",&a);
    scanf("%c",&s);
    scanf("%lld",&b);
    if(s=='+'){
        long long int ans;
        ans=a+b;
        printf("%lld",ans);
    }
    else if(s=='-'){
        long long int ans;
        ans=a-b;
        printf("%lld",ans);
    }
    else if(s=='*'){
       long long int ans;
        ans=a*b;
        printf("%lld",ans);
    }
    else if(s=='/'){
        long long int ans;
        ans=a/b;
        printf("%lld",ans);
    }
 
    return 0;
}
