#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Array[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {

            scanf("%d",&Array[i][j]);
        }

    }

    int Array2[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {

            scanf("%d",&Array2[i][j]);
        }

    }

    int c[3][3];
    for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                c[i][j] += Array[i][k] * Array2[k][j];
            }

        }
    }

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
