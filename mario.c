# include <stdio.h>
# include <cs50.h>


int main(void)
{
    int H ;
// ask for the number of rows
    do
    {
        H = get_int("height: ");
    }

// what is done if the row is accepted
    while (H < 1 || H > 8);

// first loop that runs at  each row
    for (int row = 1 ; row <= H ; row++)
    {
// print the sapce

        for (int s = 1 ; s <= H - row ; s++)
        {
            printf(" ");
        }

// the nember of hash that is equal to the number of the row

        for (int n = 1; n <= row ; n++)
        {

            printf("#");
        }

// after the hash are made for the row there is a space
        printf("\n");
    }

// yes!!!
}
