#include <stdio.h>

int main() {
    int i,T,X,Y;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&X,&Y);
        printf("%d\n",X*Y);
    }
    return 0;

}