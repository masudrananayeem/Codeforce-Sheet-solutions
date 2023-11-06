#include <stdio.h>
int main() {
    long long int a,b,c;
    char s1,s2;
    scanf("%lld %c %lld %c %lld",&a,&s1,&b,&s2,&c);
    if(s1=='+'){
       if(s2=='='){
        long long int d;
        d=a+b;
        if(c==d){
            printf("Yes\n");
        }
        else{
            printf("%lld\n",d);
        }
       }
    }
    else if(s1=='-'){
       if(s2=='='){
        long long int d;
        d=a-b;
        if(c==d){
            printf("Yes\n");
        }
        else{
            printf("%lld\n",d);
        }
       }
    }
    if(s1=='*'){
       if(s2=='='){
        long long int d;
        d=a*b;
        if(c==d){
            printf("Yes\n");
        }
        else{
            printf("%lld\n",d);
        }
       }
    }
    return 0;
}
