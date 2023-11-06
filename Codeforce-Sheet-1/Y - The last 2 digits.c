#include <stdio.h>
int main(void) {
	long long int a,b,c,d,mul;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	a=a%100;
	b=b%100;
	c=c%100;
	d=d%100;
	mul=a*b*c*d;
	if(mul%100<=9){
	    printf("0%lld\n",mul%100);
	}
	else{
	    printf("%lld\n",mul%100);
	}
 
	return 0;
}
