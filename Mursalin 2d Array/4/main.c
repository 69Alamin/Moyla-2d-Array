#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d ",&m);
    int Array[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){

            scanf("%d",&Array[i][j]);
        }

    }

    printf("Major diogonal :");
    for(int i=0;i<m;i++){
        for(int j=i;j<=i;j++){

            printf("%d ",Array[i][j]);
        }

    }

     printf("\nMinor  diogonal :");
    for(int i=0;i<m;i++){
        for(int j=m-i-1;j<=m-i-1;j++){

            printf("%d ",Array[i][j]);
        }

    }




    return 0;
}
