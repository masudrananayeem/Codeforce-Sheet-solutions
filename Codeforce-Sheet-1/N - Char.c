#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        int d;
        d=c+32;
    printf("%c\n",d);
    }    
    else if(c>='a' && c<='z'){
        int d;
        d=c-32;
        printf("%c\n",d);
    }
    return 0;
}
