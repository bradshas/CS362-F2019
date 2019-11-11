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