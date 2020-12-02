# include <stdio.h>
# include <cs50.h>
# include <math.h>


// the functions name


/*
  what we have to do :
we use get_float to get the users imput
we only accept possitive input
the only coins available are 25/ 10/ 5/ 1
we have to convert dollars to cents (cents = dollars* 100 )

*/

// the main fuction
int main(void)
{
int coins = 0;
int cents;

  do
    {
       float dollars = get_float("what is the change in cents:\n");
       cents = round(dollars * 100);
    }


    while (cents <= 0);
    //1
    if (cents >= 25)
    {
       coins += cents / 25 ; // the number of the 25 coin
       cents = cents % 25 ;  // what remains

       coins += cents / 10; // the number of 10 coins
       cents = cents % 10 ;

       coins += cents / 5; // the number of 5 coins
       cents = cents % 5 ;

       coins += cents / 1; // the number of 10 coins
       cents = cents % 1 ;

    }

    else
    {
      if (cents >= 10)
      {
          //the 2

          coins += cents / 10; // the number of 10 coins
          cents = cents % 10 ;

          coins += cents / 5; // the number of 10 coins
          cents = cents % 5 ;

          coins += cents / 1; // the number of 10 coins
          cents = cents % 1 ;
      }

      else
      {
        //the 3
        if(cents >= 5)
        {

              coins += cents / 5; // the number of 10 coins
              cents = cents % 5 ;

              cents += cents / 1; // the number of 10 coins
              cents = cents % 1 ;


        }
        //the last
        else
        {
            coins += cents / 1; // the number of 1 coins
            cents = cents % 1;
        }


      }
    }


   printf("%i",coins);
}







