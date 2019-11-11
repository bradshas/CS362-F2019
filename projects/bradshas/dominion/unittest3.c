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
	
	printf("Testing Ambassador");
	memcpy(&test, &G, sizeof(struct G));
	
	cardEffect(ambassador, choice1, choice2, choice3, &G, handPos, &bonus);
	
	player = whoseTurn(&test);

	
	
	
	
	printf("End testing");

	
}

/*int cardAmbassador(struct gameState *state, int handPos, int currentPlayer, int choice1, int choice2){
	int i;
    int j;
	//changed 0 to 1
	j = 1;		//used to check if player has enough cards to discard

	if (choice2 > 2 || choice2 < 0)
	{
		return -1;
	}

	if (choice1 == handPos)
	{
		return -1;
	}

	for (i = 0; i < state->handCount[currentPlayer]; i++)
	{
		if (i != handPos && i == state->hand[currentPlayer][choice1] && i != choice1)
		{
			j++;
		}
	}
	if (j < choice2)
	{
		return -1;
	}


	//increase supply count for choosen card by amount being discarded
	state->supplyCount[state->hand[currentPlayer][choice1]] += choice2;

	//each other player gains a copy of revealed card
	for (i = 0; i < state->numPlayers; i++)
	{
		if (i != currentPlayer)
		{
			gainCard(state->hand[currentPlayer][choice1], state, 0, i);
		}
	}

	//discard played card from hand
	discardCard(handPos, currentPlayer, state, 0);

	//trash copies of cards returned to supply
	for (j = 0; j < choice2; j++)
	{
		for (i = 0; i < state->handCount[currentPlayer]; i++)
		{
			if (state->hand[currentPlayer][i] == state->hand[currentPlayer][choice1])
			{
				discardCard(i, currentPlayer, state, 1);
				break;
			}
		}
	}
}*/