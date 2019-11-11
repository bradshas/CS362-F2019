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
	
	printf("Testing Baron");
	memcpy(&test, &G, sizeof(struct G));
	
	cardEffect(baron, choice1, choice2, choice3, &G, handPos, &bonus);
	
	player = whoseTurn(&test);
	
	printf("number of buys increase:");
	assert(test->numBuys +1 == state->numBuys);
	
	
	
	
	printf("End testing");
	
	
}

/*void cardBaron(struct gameState *state, int choice1, int currentPlayer){
	state->numBuys++;	//Increase buys by 1!
	//changed  0 to 1
	if (choice1 > 1) {	//Boolean true or going to discard an estate
		int p = 0;	//Iterator for hand!
		int card_not_discarded = 1;	//Flag for discard set!
		while(card_not_discarded) {
			if (state->hand[currentPlayer][p] == estate) { //Found an estate card!
				state->coins += 4;//Add 4 coins to the amount of coins
				state->discard[currentPlayer][state->discardCount[currentPlayer]] = state->hand[currentPlayer][p];
				state->discardCount[currentPlayer]++;
				for (; p < state->handCount[currentPlayer]; p++) {
					state->hand[currentPlayer][p] = state->hand[currentPlayer][p+1];
				}
				state->hand[currentPlayer][state->handCount[currentPlayer]] = -1;
				state->handCount[currentPlayer]--;
				card_not_discarded = 0;//Exit the loop
			}
			else if (p > state->handCount[currentPlayer]) {
				if(DEBUG) {
					printf("No estate cards in your hand, invalid choice\n");
					printf("Must gain an estate if there are any\n");
				}
				if (supplyCount(estate, state) > 0) {
					gainCard(estate, state, 0, currentPlayer);

					state->supplyCount[estate]--;//Decrement estates
					if (supplyCount(estate, state) == 0) {
						isGameOver(state);
					}
				}
				card_not_discarded = 0;//Exit the loop
			}

			else {
				//p++;	//Next card
			}
		}
	}
}*/