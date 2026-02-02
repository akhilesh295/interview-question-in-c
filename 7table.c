// Online C compiler to run C program online
 #include <stdio.h>

void mult(int i)
{
if(i<1)
{
    return;
}
printf("%d\n",i*7);
mult(i-1);
}
void main()
{
    mult(11);
}