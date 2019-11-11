#include "dominion.h"
#include "dominion.helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void main(int argc, char**argv){

	int handpos = 0;
	int choice1 = 0;
	int choice2 = 0;
	int choice3 = 0;
	int bonus = 0;
	int player = 0;
	int numPlayers = 0;
	int randomwSeed = 1000;

	//set card array
	int k[10] = { minion, council_room, ambassador, tribute, mine, remodel, smithy, village, baron, great_hall };

	//declare gamestate
	struct gameState G, test;

	
	initializeGame(numPlayers, k, randomSeed, &G);
	
	printf("Testing Mine");
	memcpy(&test, &G, sizeof(struct G));
	
	
	player = whoseTurn(&test);

	printf("correct card being read");
	assert(cardMine(&state, player, choice1, choice2, handpos) != 0);
	assert(cardMine(&state, player, choice1, choice2, handpos) != -1);
	
	
	
	
	printf("End testing");

	
}

/*int cardMine(struct gameState *state, int currentPlayer, int choice1, int choice2, int handPos){
	int i;
    int j;
	j = state->hand[currentPlayer][choice1];  //store card we will trash

	if (state->hand[currentPlayer][choice1] < copper || state->hand[currentPlayer][choice1] > gold)
	{
		return 0;	//changed -1 to 0
	}

	if (choice2 > treasure_map || choice2 < curse)
	{
		return -1;
	}

	if ( (getCost(state->hand[currentPlayer][choice1]) + 3) > getCost(choice2) )
	{
		return -1;
	}

	gainCard(choice2, state, 2, currentPlayer);

	//discard card from hand
	discardCard(handPos, currentPlayer, state, 1);	//changed 0 to 1

	//discard trashed card
	for (i = 0; i < state->handCount[currentPlayer]; i++)
	{
		if (state->hand[currentPlayer][i] == j)
		{
			discardCard(i, currentPlayer, state, 0);
			break;
		}
	}
}*/