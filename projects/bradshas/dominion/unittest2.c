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
	
	printf("Testing minion");
	memcpy(&test, &G, sizeof(struct G));
	
	cardEffect(minion, choice1, choice2, choice3, &G, handPos, &bonus);
	
	player = whoseTurn(&test);

	
	
	
	
	printf("End testing");

	
}

/*void cardMinion(struct gameState *state, int handPos, int currentPlayer, int choice1, int choice2){
	int i;
    int j;
	//+1 action
	//state->numActions++;

	//discard card from hand
	discardCard(handPos, currentPlayer, state, 0);

	if (choice1)
	{
		state->coins = state->coins + 2;
	}
	else if (choice2)		//discard hand, redraw 4, other players with 5+ cards discard hand and draw 4
	{
		//discard hand
		while(numHandCards(state) > 0)
		{
			discardCard(handPos, currentPlayer, state, 1);	//changed 0 to 1
		}

		//draw 4
		for (i = 0; i < 4; i++)
		{
			drawCard(currentPlayer, state);
		}

		//other players discard hand and redraw if hand size > 4
		for (i = 0; i < state->numPlayers; i++)
		{
			if (i != currentPlayer)
			{
				if ( state->handCount[i] > 4 )
				{
					//discard hand
					while( state->handCount[i] > 0 )
					{
						discardCard(handPos, i, state, 0);
					}

					//draw 4
					for (j = 0; j < 4; j++)
					{
						drawCard(i, state);
					}
				}
			}
		}

	}
}*/