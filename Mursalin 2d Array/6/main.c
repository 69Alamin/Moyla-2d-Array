#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int Array[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            scanf("%d",&Array[i][j]);
        }

    }

     int Array2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            scanf("%d",&Array2[i][j]);
        }

    }

   printf("\n\n");

    int c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            c[i][j]=Array[i][j]+Array2[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }



    return 0;
}
