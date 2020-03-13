#include <stdio.h>
 
#include <math.h>
 
int main()
 

 
{
 
	int n, x, res=0,i;
	scanf("%d", &n);
	 
	for( i=0; i<n; i++) {
	scanf("%d", &x);
	res+=pow(-1,(double)i+2)*x*x*x;
	}
	
	printf("%d\n", res);
	 
	return 0;
	 
}
