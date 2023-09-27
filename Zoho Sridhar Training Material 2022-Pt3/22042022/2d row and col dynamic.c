#include<stdio.h>
#include<stdlib.h>
int main()
{
   int **data=0;;
    int col_size;
    int row_size;
    int row;
    int col;
    scanf("%d", row_size);
    data = malloc( row_size * sizeof (int *));
    scanf("%d", &col_size);
    for(row = 0; row < 4; row += 1)
    {
        data [ row ] =  malloc(sizeof (int ) * col_size);
    }



































































    for(row = 0 ; row < 4; row+=1)
    {
        for(col = 0; col < col_size; col += 1)
        {
            data[ row ] [col ] = (row + 1) * 10 + (col+1);
        }
    }
   for(row = 0 ; row < 4; row+=1, printf("\n"))
    {
        for(col = 0; col < col_size; col += 1)
        {
            printf("%d ", data[ row ] [col ] );

        }
    }




    for(row = 0; row < 4; row += 1)
    {
        free( data [ row ] );
    }
    return EXIT_SUCCESS;
}
