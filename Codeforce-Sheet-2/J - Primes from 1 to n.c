#include <stdio.h>
int main () {
   long long int i, j,n;
   scanf("%lld",&n);
   for(i = 2; i<=n; i++) {
 
      for(j = 2; j <= (i/j); j++)
      if(i%j==0) break; 
      if(j > (i/j)) printf(" %lld", i);
   }
 
   return 0;
}
