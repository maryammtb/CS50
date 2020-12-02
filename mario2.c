// i need to find a faster way to make the same program 
# include <stdio.h>
#include <cs50.h>

// row = H
// in the row the number of # = 2 times the number of the row
// their are always 2 spaces in the middle
// the number of spaces in the begining of each row is the row- 1
/*
  #  #
 ##  ##
###  ###

*/

int main(void)
{
 int H;
// it will ask the user for a height
 do
 {
   H = get_int("height:\n");

 }
// give a condition to the values of H
 while (H < 0 || H > 8 );
// the first loop definrs fhe number of rows
 for(int row = 0 ; row < H ; row++)
 {
     // the second loop to determine the number of spaces 
     for(int s = 1 ; s < H - row ; s++)
     {
         printf(".");
         
     }
     // the third loop to determine the number of # in the first side 
     for (int t = 0 ; t <= row ; t++)
     {
         printf("#");
         
     }
     // print the spaces bettween the two parts 
     printf("  ");
     // the fourth loop to draw the # of the second part 
     for(int T = 0 ; T <= row ; T++)
     {
         printf("#");
     }
     // going to the new row 
     printf("\n");
     
     
     
 }

