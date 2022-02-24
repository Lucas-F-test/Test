//HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>


//PRE-PROCESSOR
#define TEST_1_MAX 8
#define TEST_2_MAX 8
#define MAX 100

//CONST

//DATA STRUCTURES
typedef struct
{
	bool death;
	bool queen;
}board_house;

//GLOBAL ARRAY

//PROTOTYPE
void insert_queen(board_house x);

void kill_board(int x, y);


//MAIN
int main(int argc, char const *argv[])
{
	int answers = 0;

	printf("Number of Quenns: ");
	int quenns;
	scanf("%i", &quenns);

	board_house board[quenns][quenns];

	for(int a = 0; a < quenns; a++)
	{
		for(int b = 0; b < quenns; b++)
		{

			answers++;

			if(board[a][b].queen == false && board[a][b].death == false)
			{
				insert_queen(board[a][b]);

				kill_board(a, b);

			}
		}
	}


printf("Respostas: %i\n", answers);

	return 0;
}

//EXPECTED ANSWERS
// 8x8 = 92
// 3x3 = 2

//PROTOTYPE DEFINITION (EXTRA FUNCTION)
void insert_queen(board_house x)
{
	x.queen = true;
}

void kill_board(int x, y)
{
	for(int j = 0; j < )
	{
	
	}
}
