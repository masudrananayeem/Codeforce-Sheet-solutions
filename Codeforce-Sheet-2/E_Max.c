#include <stdio.h>
int main() {
    long long int n,max=0;
    scanf("%lld\n",&n);
   long long int num[n];
    for(long long int i=0;i<n;i++){
        long long int a;
        scanf("%lld",&a);
        num[i]=a;
    }
    for (long long int i = 0; i < n; i++) {
        
        if(num[i]>max){
            max=num[i];
        }
    }
     printf("%lld\n",max);
 
  
    return 0;
}
