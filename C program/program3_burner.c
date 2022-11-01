//Name: Martin Calderon
//Dr. Steinberg
//COP3502 Spring 2022
//Programming Assignment 3 Skeleton

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct card_s{
	int rank;    //number
	char * type; //type of card
	struct card_s * nextptr;
}card_t;

//function prototypes
void rules(); //display rules
int playRound(); //simulate round
card_t * openCardDeck(); //open the card deck and place into a linkedlist setup
card_t * insertBackSetup(card_t *node, char *name, int cardrank); //take card from orginial deck and place in back of linked list for setup of game
int empty(card_t * node); //check to see if linked list is empty
// void cleanUp(card_t * head); //free memory to prevent memory leaks
int deckSize(card_t * head); //count number of nodes in the linked list
card_t * search(card_t * node, int spot); //search list for a specific spot in the card deck indexing is similar to array setup
card_t * copyCard(card_t * node); //make a deep copy of card
card_t * removeCard(card_t * node, int spot); //remove card from linkedlist
card_t * insertBackDeck(card_t *head, card_t *node); //place card at end of pile
// int compareCard(card_t * cardp1, card_t * cardp2); //compare cards
card_t * moveCardBack(card_t *head); //place card at top of deck to the bottom of the deck

void bruh(card_t *node)
{
	free(node);

}


int playRound()
{
	card_t * cards = NULL;
	card_t * player1 = NULL;
	card_t * player2 = NULL;

	cards = openCardDeck();


	int cardAmount = deckSize(cards);


	int cardLocation = 0;
  // loop that shuffles cards for the first player and second player
	while(cardAmount!= 0)
	{
			printf("player 1 cards\n");
			printf("card amount is : %d\n", cardAmount);
			// randomizes what card to give player 1
			cardLocation = rand() % cardAmount;

			printf("card location is %d\n", cardLocation);
			// Copy card to player 1
			// Delete from global card deck
			card_t * temp1 = cards;
 			card_t * card;
			card_t * copiedcard;
			card_t * copiedcard2;
			// finds card location for player 1
			for(int j = 0; j < cardLocation; j++)
			{
				temp1 = temp1->nextptr;
			}
			// searches for card given from the card location
			card = search(cards, temp1->rank);
			copiedcard = copyCard(card);
			printf("copied card for player 1 is %d\n", copiedcard->rank);
			printf("card for player 1 is %d \n", card->rank);
			// inserts the card from cards deck into player 1 deck

			player1 = insertBackDeck(player1, copiedcard);
			printf("player 1 head is %d\n", player1->rank);
			printf("before remove function\n");
		 // removes the card from cards deck.
			cards = removeCard(cards, card->rank);
			printf("after remove function\n");
		  cardAmount--;

			// Copy card to player 2
			// Delete from global card deck
			printf("player 2 cards\n");
			printf("card amount is : %d\n", cardAmount);
			// randomizes what card to give player 2
			cardLocation = rand() % cardAmount;

			printf("card location is %d\n", cardLocation);
			// Copy card to player 1
			// Delete from global card deck
			card_t * temp2 = cards;

			for(int j = 0; j < cardLocation; j++)
			{
				temp2 = temp2->nextptr;
			}
			// searches for card given from the card location
			card = search(cards, temp2->rank);

			printf("card for player 2 is %d\n", card->rank);
			// inserts the card from cards deck into player 2 deck
			copiedcard2 = copyCard(card);
			printf("copied card for player 2 is %d\n", copiedcard2->rank);
			player2 = insertBackDeck(player2, copiedcard2);
			printf("player 2 head is %d\n", player2->rank);
			printf("before remove function\n");
			 // removes the card from cards deck.
			cards = removeCard(cards, card->rank);
			printf("after remove function\n");
		  cardAmount--;
			while (player1!=NULL)
			{
				printf("player 1 cards are  %d\n", player1->rank);

				player1 = player1->nextptr;
			}


	}

}


//count number of nodes in the linked list
int deckSize(card_t * head)
{
	int count = 0;

	while(head!=NULL)
	{
		count++;
		head = head->nextptr;

	}
	return count;
}


// function copies players card and allocates memory for a node
card_t * copyCard(card_t * node)
{
	card_t * cardcopy = (card_t *) malloc(sizeof(card_t));

	if(cardcopy == NULL)
	{
		printf("malloc wasn't successful");
		return NULL;
	}
	cardcopy->rank = node->rank;
	cardcopy->nextptr = NULL;

	return cardcopy;

}


card_t * insertBackDeck(card_t *head, card_t *node)
{

	card_t * temp = head;

	// Adds node to head if null then returns the new head
	if (head == NULL)
	{
		head = node;
		return head;
	}

	// If head is not null, traverses to end of linked linked
	// Adds node to end of linked list
	int i = 0;
		while (temp!= NULL)
		{
     // breaks here
			temp = temp->nextptr;
			i++;
		}
		temp = node;


	return head;
}


// function searches for card and removes it
card_t * removeCard(card_t * node, int spot)
{
	// if no cards return null
	if(empty(node))
	{
		return NULL;
	}
	card_t * head = node;
	card_t * temp2 = node;
	// searches through function for card to remove
	card_t * temp = search(node, spot);

	// if value does not exist return head
	if(temp == NULL)
	{
			return head;
	}
	// if the spot is found in head free the value from temp and set head to next pointer
	if(head == temp)
	{
		head = head->nextptr;
		free(temp);
		return head;
	}
	// progress throguh linked list until temp2 = temp1 and frees temp value
	// and assignes temp 2 to next.
	while(temp2->nextptr != temp)
	{
			temp2 = temp2->nextptr;
	}

	temp2->nextptr = temp->nextptr;

	free(temp);

	return head;

}


card_t * search(card_t * node, int spot)
{
	// searches throughout the cards nodes until
	// a certain card is found/
	while(node != NULL)
	{
		if(node->rank == spot)
		{
			printf("node searched is %d\n", node->rank);
			return node;
		}
		node = node->nextptr;
	}
	// If no card is found then returns NULL.
	return NULL;

}




// Takes the head of the card linked list
// and moves it to the back of the list.
card_t * moveCardBack(card_t *head)
{

	// initalizes temp values in the value after head.
 card_t * temp1 = head->nextptr;
 card_t * temp2 = head->nextptr;
		// initializes the next ptr from head to null.
		head->nextptr = NULL;
		// traverses the linked list until temp hits null.
	while(temp1->nextptr!=NULL)
	{
		temp1 = temp1->nextptr;
	}
	// when temp1 next pointer is null it
	// sets it to the value of head.
	if(temp1->nextptr == NULL)
	{
		temp1->nextptr = head;
	}
	// head gets sent back to the front of the deck from here.
  head = temp2;
	// returns the head back into the linked list.
	return head;

}


int main()
{
	int seed;
	printf("Enter Seed: ");
	scanf("%d", &seed);

	srand(seed); //seed set
	rules();

	int player; //1 or 2
	int result;

	printf("Would you like to be player 1 or 2?\n");
	printf("Enter 1 or 2: ");
	scanf("%d", &player); //choose player

	for(int game = 1; game <= 5; ++game) //simulate games
	{
		printf("Alright lets play game %d.\n", game);
		printf("Lets split the deck.\n");

		result = playRound(); //play game

		if((result == 1 && player == 1) || (result == 2 && player == 2)) //determine who won
			printf("You won game %d.\n", game);
		else
			printf("I won game %d.\n", game);
	}

	return 0;
}

void rules()
{
	printf("Welcome to the card game war!\n");
	printf("Here are the rules.\n");
	printf("You have a pile of cards and I have a pile of cards.\n");
	printf("We will each pull the top card off of our respective deck and compare them.\n");
	printf("The card with the highest number will win the round and take both cards.\n");
	printf("However if there is a tie, then we have to we have to place three cards out and pull one more to compare the final result.\n");
	printf("Winner of the tie, will grab all the cards out. However if it's a tie again, then we repeat the same action.\n");
	printf("Ready? Here we go!\n");
}

card_t * openCardDeck()
{
	FILE *fptr = fopen("deck.txt", "r");

	char *name = (char *) malloc(sizeof(char) * 20);

	if (name == NULL)
	{
		printf("Error in malloc...\n");
		exit(1);
	}

	card_t * head = NULL;

	int cardrank = 13;
	int tracker = 1;
	while(fscanf(fptr, "%s", name) == 1)
	{
		strcat(name, " ");

		if(tracker % 5 == 1)
		{
			strcat(name, "of Clubs");
			head = insertBackSetup(head, name, cardrank);
		}
		else if(tracker % 5 == 2)
		{
			strcat(name, "of Diamonds");
			head = insertBackSetup(head, name, cardrank);
		}
		else if(tracker % 5 == 3)
		{
			strcat(name, "of Hearts");
			head = insertBackSetup(head, name, cardrank);
		}
		else if(tracker % 5 == 4)
		{
			strcat(name, "of Spades");
			head = insertBackSetup(head, name, cardrank);
			tracker = 0;
			--cardrank;
		}

		++tracker;

	}

	free(name);
	fclose(fptr);

	return head;
}

card_t * insertBackSetup(card_t *node, char *name, int cardrank)
{

    if(empty(node)) //check to see if list is empty
    {
		node = (card_t *) malloc(sizeof(card_t));

		if(empty(node)) //check to see if malloc worked
		{
			printf("Did not allocate head successfully...");
			printf("Program Terminating...\n");
			exit(1);
		}
		else //otherwise populate data of new head node
		{
			node->type = (char *) malloc(sizeof(char) * 20);

			if(node->type == NULL)
			{
				printf("Error with malloc...\n");
				exit(1);
			}

			strcpy(node->type, name);
			node->rank = cardrank;
			node->nextptr = NULL; //must make new tail nextptr NULL!!!

			return node;  //terminate
		}

    }

	//here we know that the list has at least one node

	card_t *head = node; //keep pointer to head since we will need to return this address

	while(node->nextptr != NULL) //traverse to tail
		node = node->nextptr;

	node->nextptr = (card_t *) malloc(sizeof(card_t));

	if(node->nextptr == NULL) //see if new tail was allocated successfully
	{
		printf("Did not allocate node successfully...");
		return head; //terminate if tail didn't get created
	}

	//populate new node
	node->nextptr->type = (char *) malloc(sizeof(char) * 20);

	if(node->nextptr->type == NULL)
	{
		printf("Error with malloc...\n");
		exit(1);
	}

	strcpy(node->nextptr->type, name);
	node->nextptr->rank = cardrank;
	node->nextptr->nextptr = NULL; //very important

	return head; //return head node since we need our starting point of the linked list
}

int empty(card_t * node)
{
	return (node == NULL); //return condition result
}
