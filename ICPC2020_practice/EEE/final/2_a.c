2)a)
#include<stdio.h>
int main ()
{
    int i;
    for(i=1; i<=100; i++)
    {
        if( i%2!=0 && i%3==0 && i%5==0 )
        {
            printf("%d ",i);
        }
    }
    return 0;
}
Output is: 15 45 75
