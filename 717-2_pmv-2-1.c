#include <stdio.h>
 
int main()
 
{
 
	int n, x, i=0,j;
	scanf("%d", &n);
	
	for(j=0; j<n; j++) {
	scanf("%d", &x);
 
	if(x>0) i++;
 	}

	printf("%d\n", i); 
 
	return 0;
 
}
