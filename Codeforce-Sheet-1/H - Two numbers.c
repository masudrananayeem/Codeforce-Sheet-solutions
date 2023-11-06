#include <stdio.h>
#include<math.h>
void pass(double d){    
}
int main() {
    long long int a,b,c;
    double d;
    scanf("%lld%lld",&a,&b);
    c=a/b;
    d=(double)a/b;
    pass(d);
    printf("floor %lld / %lld = %lld\n",a,b,c);
    if(c==1 && c==d){
        printf("ceil %lld / %lld = %lld\n",a,b,c);
    }
    else {
        printf("ceil %lld / %lld = %lld\n",a,b,c+1);
    }
    
    if(d-c<0.5){
        printf("round %lld / %lld = %lld\n",a,b,c);
    }
    else{
        printf("round %lld / %lld = %lld\n",a,b,c+1);
    }    
    return 0;    
}
