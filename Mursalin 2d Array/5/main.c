#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m;
    scanf("%d",&m);
    int Array[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){

            if(j==i)
                printf("1");
            else
            printf("0",Array[i][j]);
        }
       printf("\n");
    }


    return 0;
}
