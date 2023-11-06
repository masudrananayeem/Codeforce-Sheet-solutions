#include <stdio.h>
 
int main(void) {
	long long int a,b,c,d;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	if(a<=c && c<=b){
	    if(b<=d){
	        printf("%lld %lld\n",c,b);
	    }
	    else if(d<=b){
	        printf("%lld %lld\n",c,d);
	    }
	}
	else if(a>=c && a<=d){
	    if(b>=d){
	        printf("%lld %lld\n",a,d);
	    }
	    else if(b<=d){
	        printf("%lld %lld\n",a,b);
	    }
	}
	else{
	    printf("-1\n");
	}
	return 0;
}
