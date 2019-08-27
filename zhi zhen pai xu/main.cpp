#include<stdio.h>
int main()
{
    int i,j;
    int *p;
    int number[10];
    int middle=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&number[i]);
    }
    p=number;
    for(i=0,p=number;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(*p>*(p+1))
            {
                middle=*p;
                *p=*(p+1);
                *(p+1)=middle;
            }
            p++;
        }
    }
    p=0;
    for(i=0;i<10;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
