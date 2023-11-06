#include <stdio.h>
int main() {
    long long int x,y,z;
    scanf("%lld%lld%lld",&x,&y,&z);
    if(x<=y && y<=z){
        printf("%lld\n%lld\n%lld\n",x,y,z);
    }
    else if(x<=z && z<=y){
        printf("%lld\n%lld\n%lld\n",x,z,y);
    }
    else if(y<=x && x<=z){
        printf("%lld\n%lld\n%lld\n",y,x,z);
    }
    else if(y<=z && z<=x){
        printf("%lld\n%lld\n%lld\n",y,z,x);
    }
    else if(z<=x && x<=y){
        printf("%lld\n%lld\n%lld\n",z,x,y);
    }
    else if(z<=y && y<=x){
        printf("%lld\n%lld\n%lld\n",z,y,x);
    }
    printf("\n");
        printf("%lld\n%lld\n%lld",x,y,z);
    return 0;
}
