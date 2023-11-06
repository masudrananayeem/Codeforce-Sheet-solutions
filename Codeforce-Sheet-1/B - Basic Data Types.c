#include <stdio.h>
int main() {
     int a;
     long long int b;
     char ch;
     float d;
     double e; 
     scanf("%d%lld",&a,&b);
     getchar();
     scanf("%c",&ch);
     scanf("%f%lf",&d,&e);
     printf("%d\n%lld\n%c\n%.2f\n%.1lf",a,b,ch,d,e);
 
    return 0;
}
