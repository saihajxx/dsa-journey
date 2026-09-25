#include <stdio.h>

int main() {
	int i,T,X;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%d",&X);
	    if (X<=10)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	   
	}
	return 0;

}