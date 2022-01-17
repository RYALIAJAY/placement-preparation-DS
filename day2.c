//rotating the matrice 90 degrees anti clock wise
//row and columns will be taken from user
#include<stdio.h>
int main()
{
    int m,n,a[100][100],b[100][100];
    printf("enter m and n values: ");
    scanf("%d %d",&m,&n);
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("rotating 90 degrees anti-clock wise......\n");

    for(i=1;i<=m;i++)
    {
         for(j=1;j<=n;j++)
        {
            b[i][j]=a[j][m-i+1];
        }
    }

    for(i=1;i<=m;i++)
    {
         for(j=1;j<=n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}