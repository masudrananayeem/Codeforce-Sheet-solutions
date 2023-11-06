#include <stdio.h>
#include<string.h>
int main() { 
   char s1[50000],s2[50000],s3[50000],s4[50000];
    scanf("%s%s",&s1,&s2);
    scanf("%s%s",&s3,&s4);
    int d = strcmp(s2,s4);
    if(d== 0){
        printf("ARE Brothers\n");
    }
    else{
        printf("NOT\n");
    } 
    return 0;
}
