#include<stdio.h>
#include<stdlib.h>
int main()
{
    int data [ 4 ] [ 10 ];
    int row;
    int col;
    for(row = 0 ; row < 4; row+=1)
    {
        for(col = 0; col < 10; col += 1)
        {
            data[ row ] [col ] = (row + 1) * 10 + (col+1);
        }
    }
   for(row = 0 ; row < 4; row+=1, printf("\n"))
    {
        for(col = 0; col < 10; col += 1)
        {
            printf("%d ", data[ row ] [col ] );

        }
    }
    return EXIT_SUCCESS;
}
