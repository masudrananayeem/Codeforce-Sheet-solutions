#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=(n/i);i++){
        if(n%i==0){
            printf("NO\n");
         break;   
        }
        }
        if(i>(n/i)){
        printf("YES\n");
    }
    return 0;
}
