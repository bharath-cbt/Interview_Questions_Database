#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include "arrcommon.h"
int main()
{

   int data [] = {1171,30,91,70,10,33,37,99,68,10290,139,199,149,99,14,99,47,88,88,88,88,88};
   int data_size;
   int window_size;
   int window_begin;
   int window_end;
   int window_sum;
   int max_windows_sum;
   int max_win_begin;
   int max_win_end;
   int window_walker;
   data_size =  size(data);
   max_windows_sum = INT_MIN;
   window_size = 5;
   window_begin = 0;
   window_sum = 0;
   window_end =  window_size  - 1;
   for(window_walker = window_begin ; window_walker <= window_end ; window_walker += 1)
       window_sum += data [ window_walker ];
   max_windows_sum = window_sum;
   max_win_begin = 0;
   max_win_end = window_end;
   for(window_begin +=1, window_end += 1; window_end < data_size; window_begin+=1, window_end+=1)
   {
       window_sum -= data[ window_begin - 1];
       window_sum += data [ window_end ];
       if(window_sum > max_windows_sum)
       {
           max_windows_sum = window_sum;
           max_win_begin = window_begin;
           max_win_end = window_end;

       }
   }
   printf("%d is the sum windows begins at %d and ends at %d", max_windows_sum,max_win_begin, max_win_end);

   return EXIT_SUCCESS;
}
