#include <stdio.h>
int main() {
   long long int n;
   for(long long int i=1;;){
       scanf("%lld",&n);
          if(n==1999){
       printf("Correct\n");
       break;
   }
   else{
       printf("Wrong\n");
      }
   }
    return 0;
}
