#include<stdio.h>
int main()
{
    int n=16;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n||i==j&&i<=n/2||i==n/2&&j>=n/2||j==n/2&&i>=n/2)
            {
                printf(" * ");
            }
            else if(i==n/2+(n/4)&&j==n/2+(n/4))
            {
                printf(" $ ");
            }
            else
            {
                printf("   ");
            }
        }
        for(int j=2;j<=n/2;j++)
        {
            if(i==j&&i<=n/2||i==n/2&&j<=n/2||j==n/2&&i>=n/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j&&i<=n/2||i==n/2&&j>=n/2||j==n/2&&i<=n/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        for(int j=1;j<n/2;j++)
        {
            if(i==n/2||j==n/2-1&&i<=n/2||i==j+1&&i<n/2)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}