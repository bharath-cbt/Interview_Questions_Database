#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include "arrcommon.h"
int main()
{
   //                      wb          we
   int data [] = {11,30,91,70,10,33,37,19,68,29,39,69,49,59,14,99,47,88};
   //             91, 91, 91, 99, 99, 99, 99, 99, 69, 69, 69, 99, 99, 99
   /*
   0  1  2  3  4
   11 30 91 70 10               91 [ 2 ]
    1  2  3  4  5
   30 91 70 10 3                91
    2  3  4  5  6
   91 70 10 33 37               91
    3  4  5  6  7
   70 10 33 36 89

   */
   int data_size;
   int window_size;
   int window_begin;
   int window_end;
   int window_MAX;
   int window_MAX_POS;
   int window_walker;
   data_size =  size(data);
   window_size = 5;
   window_begin = 0;
   window_end =  window_size  - 1;
   window_MAX = INT_MIN;
   for(window_walker = window_begin ; window_walker <= window_end ; window_walker +=1)
   {
       if(data [ window_walker ] > window_MAX)
       {
           window_MAX = data [window_walker];
           window_MAX_POS = window_walker;
       }
   }
   printf("%d ", window_MAX);
   for(window_begin +=1, window_end += 1; window_end < data_size; window_begin +=1, window_end+=1)
   {


       if(window_MAX_POS >= window_begin)
       {
           if(data [ window_end ] > window_MAX)
           {
               window_MAX = data [window_end];
                window_MAX_POS = window_end;
           }
       }
       else
       {
            window_MAX = INT_MIN;
            for(window_walker = window_begin ; window_walker <= window_end ; window_walker +=1)
            {
               if(data [ window_walker ] > window_MAX)
               {
                   window_MAX = data [window_walker];
                   window_MAX_POS = window_walker;
               }
            }
        }
        printf("%d ", window_MAX);

   }
   return EXIT_SUCCESS;
}
