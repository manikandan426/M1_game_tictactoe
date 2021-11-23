
#include<stdio.h>
#include<Tictactoe.h>
 int checkwin(char square2[])
{
    if (square2[1] == square2[2] && square2[2] == square2[3])
        return 1;
 
    else if (square2[4] == square2[5] && square2[5] == square2[6])
        return 1;
 
    else if (square2[7] == square2[8] && square2[8] == square2[9])
        return 1;
 
    else if (square2[1] == square2[4] && square2[4] == square2[7])
        return 1;
 
    else if (square2[2] == square2[5] && square2[5] == square2[8])
        return 1;
 
    else if (square2[3] == square2[6] && square2[6] == square2[9])
        return 1;
 
    else if (square2[1] == square2[5] && square2[5] == square2[9])
        return 1;
 
    else if (square2[3] == square2[5] && square2[5] == square2[7])
        return 1;
 
    else if (square2[1] != '1' && square2[2] != '2' && square2[3] != '3' &&
        square2[4] != '4' && square2[5] != '5' && square2[6] != '6' && square2[7]
        != '7' && square2[8] != '8' && square2[9] != '9')
 
        return 0;
    else
        return  - 1;
}
