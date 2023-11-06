#include <stdio.h>
int main() {
   double n;
   scanf("%lf",&n);
   int a=n;
   if(a==n){
       printf("int %d\n",a);
   }
   else{
         printf("float %d %.3f\n",a,n-a);
   }
    return 0;
}
