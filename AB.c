#include<stdio.h>

int main ()
{
    int r1 , c1 , r2 ,c2 ;
    printf("\nEnter row and column of Matrix A :  ") ;
    scanf("%d%d",&r1,&c1) ;
    printf("\nEnter row and column of Matrix B :  ") ;
    scanf("%d%d",&r2,&c2) ;

    int a[r1][c1] , b[r2][c2] , m[r1][c2] , i , j , k , sum = 0  ;

    if(c1 != r2)
    {
        printf("\nMultiplication is not possible") ;

    }

    else
    {
        printf("\nMultiplication  possible") ;

        printf("\nEnter Element of Matrix A :") ;

        for(i = 0 ; i < r1 ; i ++)
        {
            for(j = 0 ; j < c1 ; j ++)
            {
                scanf("%d" ,&a[i][j]) ;
            }
        }
        printf("\nEnter Element of Matrix B :") ;

        for(i = 0 ; i < r2 ; i ++)
        {
            for(j = 0 ; j < c2 ; j ++)
            {
                scanf("%d" ,&b[i][j]) ;
            }
        }

        printf("\nMatrix A :\n") ;

        for(i = 0 ; i < r1 ; i ++)
        {
            for(j = 0 ; j < c1 ; j ++)
            {
                printf("%d\t" , a[i][j]) ;
            }
            printf("\n") ;
        }
        printf("\nMatrix B :\n") ;

        for(i = 0 ; i < r2 ; i ++)
        {
            for(j = 0 ; j < c2 ; j ++)
            {
                printf("%d\t" , b[i][j]) ;
            }
            printf("\n") ;
        }


        for(i = 0 ; i < r1 ; i ++)
        {
            for( j = 0 ; j < c2 ; j ++)
            {
                for (k = 0 ; k < c1 ; k ++)
                {
                    sum += a[i][k] * b[k][j] ;

                }
                 m[i][j] = sum ;
                 sum = 0 ;
            }
        }

        printf("\nMatrix Multiplication of AB :\n") ;

        for(i = 0 ; i < r1 ; i ++)
        {
            for(j = 0 ; j < c2 ; j ++)
            {
                printf("%d\t" , m[i][j]) ;
            }
            printf("\n") ;
        }


    }

    return 0 ;
}
