/*void cardTribute(struct gameState *state, int nextPlayer, int tributeRevealedCards[], int currentPlayer){
	int i;
	if ((state->discardCount[nextPlayer] + state->deckCount[nextPlayer]) <= 0) {	//changed 1 to 0
		if (state->deckCount[nextPlayer] > 0) {
			tributeRevealedCards[0] = state->deck[nextPlayer][state->deckCount[nextPlayer]-1];
			state->deckCount[nextPlayer]--;
		}
		else if (state->discardCount[nextPlayer] > 0) {
			tributeRevealedCards[0] = state->discard[nextPlayer][state->discardCount[nextPlayer]-1];
			state->discardCount[nextPlayer]--;
		}
		else {
			//No Card to Reveal
			if (DEBUG) {
				printf("No cards to reveal\n");
			}
		}
	}

	else {
		if (state->deckCount[nextPlayer] == 0) {
			for (i = 0; i < state->discardCount[nextPlayer]; i++) {
				state->deck[nextPlayer][i] = state->discard[nextPlayer][i];//Move to deck
				state->deckCount[nextPlayer]++;
				state->discard[nextPlayer][i] = -1;
				state->discardCount[nextPlayer]--;
			}

			shuffle(nextPlayer,state);//Shuffle the deck
		}
		tributeRevealedCards[0] = state->deck[nextPlayer][state->deckCount[nextPlayer]-1];
		state->deck[nextPlayer][state->deckCount[nextPlayer]--] = -1;
		state->deckCount[nextPlayer]--;
		tributeRevealedCards[1] = state->deck[nextPlayer][state->deckCount[nextPlayer]-1];
		state->deck[nextPlayer][state->deckCount[nextPlayer]--] = -1;
		state->deckCount[nextPlayer]--;
	}

	if (tributeRevealedCards[0] == tributeRevealedCards[1]) { //If we have a duplicate card, just drop one
		state->playedCards[state->playedCardCount] = tributeRevealedCards[1];
		state->playedCardCount++;
		tributeRevealedCards[1] = -1;
	}

	for (i = 0; i <= 2; i ++) {
		if (tributeRevealedCards[i] == copper || tributeRevealedCards[i] == silver || tributeRevealedCards[i] == gold) { //Treasure cards
			state->coins += 2;
		}

		else if (tributeRevealedCards[i] == estate || tributeRevealedCards[i] == duchy || tributeRevealedCards[i] == province || tributeRevealedCards[i] == gardens || tributeRevealedCards[i] == great_hall) { //Victory Card Found
			drawCard(currentPlayer, state);
			drawCard(currentPlayer, state);
		}
	}
}*/