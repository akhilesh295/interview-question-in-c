#include <stdio.h>

int main() 
{
    int uid=295;
    int upwd=786;
    int id;
    int pwd;
    printf("enter the user id\n");
    scanf("%d",&id);
    printf("enter the pwd\n");
    scanf("%d",&pwd);
    if(uid==id)
    {
        if(upwd==pwd)
        {
            printf("login successful");
        }
        else
        {
            printf("incarrect pwd\n");
        }
    }
    else
    {
        printf("incarrect user id\n");
    }
    }