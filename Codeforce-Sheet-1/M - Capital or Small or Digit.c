#include <stdio.h>
 
int main() {
    char a;
    scanf("%c",&a);
    if('A'<=a && 'Z'>=a){
        printf("ALPHA\nIS CAPITAL");
    }
    else if('a'<=a && 'z'>=a){
        printf("ALPHA\nIS SMALL");
    }
    else{
        printf("IS DIGIT");
    }
    return 0;
}
