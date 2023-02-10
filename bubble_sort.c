#include<stdio.h>
int main()
{
    int a[5],i,temp,j;
    printf("Enter the array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=1+j;i<4;i++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n array is :\n ");
    for(i=0;i<5;i++)
    {
        printf("%d \n",a[i]);
    }
}