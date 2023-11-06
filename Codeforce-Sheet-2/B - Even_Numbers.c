#include <stdio.h>
int main() {
   long long int n;
   scanf("%lld",&n);
   for(long long int i=1;i<=n;i++){
       long long int e;
       e=i;
       if(e%2==0){
        printf("%lld\n",e);   
       }
   }
   if(n==1){
       printf("-1\n");
   }
    return 0;
}
