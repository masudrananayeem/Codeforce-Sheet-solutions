#include <stdio.h>
int main() {
    int x,b;
    scanf("%d",&x);
    b=x/1000;
    if(b%2==0)
    printf("EVEN\n");
    else{
        printf("ODD\n");}
    return 0;
}
