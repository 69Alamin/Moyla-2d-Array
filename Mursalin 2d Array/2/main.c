#include <stdio.h>
#include <stdlib.h>

int main()
{  int m,n;
    scanf("%d %d",&m,&n);
    int Array[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            scanf("%d",&Array[i][j]);
        }

    }


    printf("Row-wise :");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            printf("%d ",Array[i][j]);
        }

    }

    printf("\nColumn-wise :");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            printf("%d ",Array[j][i]);
        }

    }
    return 0;
}
