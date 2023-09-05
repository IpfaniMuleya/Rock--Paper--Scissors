#include "header.h"

/**
 * main - main function aka entry point
 * srand() - Chooses the random number every time
 * scanf() - gets the input from the player
 * 
 * return: -1 for draw, 0 for lose and 1 for win
*/

int main()
{
    int num;
	char you, computer, result;

	srand(time(NULL));

	num = rand() % 100;

	if (num < 33)
		computer = 'r';

	else if (num > 33 && num < 66)
		computer = 'p';

	else
		computer = 's';

	printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER and s for SCISSOR\n\t\t\t\t\t\t\t");

	scanf("%c", &you);
	result = rulesOfGame(you, computer);

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
    else if (result == 1) {
    	printf("\n\n\t\t\t\t You win!!!\n");
        printf("\n\n\t\t\t\t YOU THE BEST!!!\n");
	}
	else {
		printf("\n\n\t\t\t\t You lose!!!\n");
        printf("\n\n\t\t\t\t YOU LOSER!!!\n");
	}
		printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);

	return (0);
}