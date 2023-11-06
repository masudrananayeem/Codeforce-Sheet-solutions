#include <stdio.h>
int main() {
    long long int a,b;
    char s;
    scanf("%lld %c %lld",&a,&s,&b);
    if(s=='<'){
        if(a<b){
            printf("Right\n");
        }   
        else{
            printf("Wrong\n");
        }
    }
    else if(s=='>'){
        if(a>b){
            printf("Right\n");
        }   
        else{
            printf("Wrong\n");
        }
    }
    else if(s=='='){
        if(a==b){
            printf("Right\n");
        }   
        else{
            printf("Wrong\n");
        }
    } 
    return 0;
}
