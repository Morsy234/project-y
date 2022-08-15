#include <stdio.h>
#include <stdlib.h>
// by recrusion method
int fibonacci1(int n)
{
    if(n==0)
        return 0;
    if(n==1||n==2)
        return 1;
    else
        return fibonacci1(n-1)+fibonacci1(n-2);
}
//by iteration method
void fibonacci2(int n)
{
    int n1=0,n2=1,n3,i;
    printf("%d %d ",n1,n2);

    for(i=3;i<=n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}
int main()
{
    int x,y;
    printf("Enter number of terms: ");
    scanf("%d",&x);
    printf("Fibonacci series by recursion: ");
    for(int i=0;i<x;i++)
    {
        printf("%d ",fibonacci1(i));
    }

    printf("\n");
    printf("Enter your preferred number of elements here: ");
    scanf("%d",&y);
    printf("Fibonacci series by iteration: ");
    fibonacci2(y);
    return 0;
}
