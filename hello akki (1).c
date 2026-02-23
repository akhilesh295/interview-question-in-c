#include<stdio.h>
int main()
{
 int a;
 printf("enter a value : \n");
 scanf("%d",&a);
 if(a>=23)
 {
  printf("the person is eligible for marriage");
 }
 else if(a<23)
 {
  printf("the person is not eligible for marriage");
 }
 else
 {
  printf("program ended");
 }
 }