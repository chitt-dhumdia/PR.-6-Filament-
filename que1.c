#include<stdio.h>

int main()
{
    char str[20];
    int length=0,pelidrome=0;

    printf("\n please enter any string : ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }

    for(int i=0;i<length/2;i++)
    {
        if(str[i]==str[length-i-1])
        {
            pelidrome=1;
        }
    }

    if(pelidrome==1)
    {
        printf("your string is pelidrome");
    }
    else
    {
        printf("your string is not pelidrome");   
    }

    return 0;

}