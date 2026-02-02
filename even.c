#include <stdio.h>

void num(int i)
{
    if(i>100)
    {
        return;
    }
    if(i%2!=0)
    {
        printf("%d is odd \n",i);
    }
    else
    {
        printf("%d is even \n",i);
    }
    num(i+1);
}
void main()
{
    num(1);
}