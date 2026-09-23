#include <stdio.h>
int main()
{
	int a,b,sumI,diffI;
    float c,d,sumF,diffF;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    sumI=a+b;
    sumF=c+d;
    diffI=a-b;
    diffF=c-d;
    
    printf("%d %d",sumI,diffI);
    printf("%.f %.f",sumF,diffF);
    
    
    return 0;
}