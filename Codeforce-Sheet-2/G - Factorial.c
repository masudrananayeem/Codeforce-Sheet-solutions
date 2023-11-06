#include <stdio.h>
int main() {
  long long int n,num=1;
  scanf("%lld",&n);
  int fact[n];
  for(int i=0;i<n;i++){
     long long int a;
     scanf("%lld",&a);
     fact[i]=a;
  }
  for(int i=0;i<n;i++){
      if(fact[i]==0){
          printf("1\n");
      }
      else if(fact[i]>0){
         //printf("%d\n",fact[i]);
      long long int d=fact[i];
       for(int i=1;i<=d;++i){
           num=num*i;
       }
       printf("%lld\n",num);
      }
      num=1;
  }
    return 0;
}
