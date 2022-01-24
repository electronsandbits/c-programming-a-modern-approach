/*
 * File: poker.c
 * -------------
 * This program will read and classify a poker hand. Each card in the
 * handwill have both a suit(clubs, diamonds, hearts, spades) and a rank
 * (two, three, four,five, six, seven, eight, nine, ten, jack,  queen, king
 * ace). Won't allow the use of jokers, and we'll assume that aces are high. * The program will read a hand of five cards, then classify the hand into
 * one of the following categories(listed in order from best to worst):
 * 
 * straight flush (both a straight and a flush)
 * four-of-a-kind (four cards of the same rank)
 * full house (a three-of-a-kind and pair)
 * flush (five cards of the same suit)
 * staight (five cards with consecutive ranks)
 * three-of-a-kind (three cards of the same rank)
 * two pairs 
 * pairs (two cards of the same rank)
 * high card (any other hand)
 */

#include <stdbool.h>  /* C 99 only */
#include <stdio.h>
#include <stdlib.h>

/* Constants */

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* Function prototypes */

void readCards(void);
void analyzeHand(void);
void printResult(void);

/* Global variables */

int numInRank[NUM_RANKS];
int numInSuit[NUM_SUITS];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* Main program 
 * Calls readCards, analyzeHand, and print result repeatedly.
 */

int main (void) {
   for (;;) {
      readCards();
      analyzeHand();
      printResult();
   }
}

/*
 * Function:readCards
 * Usage: 
 * ------------------
 * Reads the cards into the external variables numInRank and numInSuit;
 * checks for bad cards and duplicate cards.
 */

void readCards(void) {
   bool cardExists[NUM_RANKS][NUM_SUITS];
   char ch, rankCh, suitCh;
   int rank, suit;
   bool badCard;
   int cardsRead = 0;

   for (rank = 0; rank < NUM_RANKs; rank++) {
      numInRank[rank] = 0;
      for (suit = 0; suit < NUM_SUITS; suit++) {
         cardExists[rank] [suit] = false;
      }
   }

   while (cardRead < NUM_CARDS) {
      badCard = false;
      printf("Enter a card:  ");

      rankCh = getchar();
      switch (rankCh) {
	 case '0': exit (EXIT_SUCCESS);     
	 case '2': rank = 0; break;
         case '3': rank = 1; break;
         case '4': rank = 2; break;
         case '5': rank = 3; break;		   
         case '6': rank = 4; break;
         case '7': rank = 5; break;
         case '8': rank = 6; break;
         case '9': rank = 7; break;
         case 't': case 'T': rank = 8;  break;
	 case 'j': case 'J': rank = 9;  break;
	 case 'q': case 'Q': rank = 10; break;		     
         case 'k': case 'K': rank = 11; break;
         case 'a': case 'A': rank = 12; break;
         default:            badCard = true;
      }
      suitCh = getchar();
      switch (suitCh) {
	 case 'c': case 'C': suit = 0; break;
         case 'd': case 'D': suit = 1; break;
         case 'h': case 'H': suit = 2; break;
	 case 's': case	'S': suit = 3; break;
	 default:            badCard = true;		     
      }



   }   




   }


}
