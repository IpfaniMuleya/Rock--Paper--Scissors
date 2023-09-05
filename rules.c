#include "header.h"

/**
 * rulesOfGame - these are the mechanics of the game aka riles of the game
 * 
 * Return: -1 for draw, 0 for win and 1 for lose
*/

int rulesOfGame(char you, char computer)
{
	if (you == computer)
		return (-1);

	if (you == 'r' && computer == 'p')
		return (0);

			else if (you == 'p' && computer == 'r') 
            return (1);

	if (you == 'r' && computer == 's')
		return (1);

	else if (you == 's' && computer == 'r')
		return (0);

	if (you == 'p' && computer == 's')
		return (0);

	else if (you == 's' && computer == 'p')
		return (1);
}