#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int Array[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            scanf("%d",&Array[i][j]);
        }

    }

    int max=Array[0][0];
    int row,col;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(max<Array[i][j])
            {
                max=Array[i][j];
                row=i;
                col=j;
            }

        }

    }

    printf("Max :%d\n",max);
    printf("Location :[%d][%d]",row,col);
    return 0;
}
