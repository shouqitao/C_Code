/* Filename: BLACKJACK.C
 * This program plays  a game of BLackjack with you. The player is the dealer and you are the victim-er, I mean
 * player. the dealer gets a card that you can see. The dealer then asks if you want another card by asking "Hit"
 * or "Stand". If you choose to hit, the dealer gives you another card. If you choose stand, the dealer draws or
 * stands, and the game is played out according to the cards you and the dealer have. As with real BlackJack, the
 * dealer stands on 17. the winner is announced only after both the player's and the dealer's hands are finished.*/

/****************************************************************************************************************
 * ANSI C standard header files appear next */
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

/****************************************************************************************************************
 * Defined constants appear next */
#define DELL 'a'
#define DEALER 0
#define PLAYER 1

/* Must keep two sets of totals for dealer and for player. the first set counts Aces as 1 and the second counts Aces
 * as 11. Unlike "real world" BlackJack, this program doesn't allow some Aces to be 1 while others Aces are 11 int
 * the same hand */
#define ACELOW 0
#define ACEHIGH 1
/* Only one global variable is used in this entire program. The variable holds 0, which means false initiallu. Once
 * the user enters his or her name in initCardsScereen(), this variable is set to 1 (for true), so the name is never
 * asked for again the rest of the program.*/
int askedForName = 0;   /* False initally */
/******************************************************************************************************************
 * This program's specific prototypes */
void dispTitle(void);
void initCardsScreen(int cards[52], int playerPoints[2], int dealerPoints[2], int total[2], int * numCards);
int dealCard(int * numCaeds, int casrds[52]);
void dispCard(int casrDrawn, int points[2]);
void totalIt(int points[2], int total[2], int who);
void dealerGetsCard(int *numCards, int cards[52], int dealerPoints[2]);
void playerGetsCard(int *numCards, int cards[52],int playerPoints[2]);
char getAns(char mesg[]);
void findWinner(int total[2]);

/******************************************************************************************************************
 * C's program execution always begins at main() here */
int main()
{
    int numCards;    /* Eqauls 52 at beginning of each game */
    int cards[52], playerPoints[2], dealerPoints[2], total[2];
    char ans;   /* For user's Hit/Stand or Yes/No response */
    do{
        initCardsScreen(cards,playerPoints, dealerPoints, total, &numCards);
        dealerGetsCard(&numCards, cards, dealerPoints);
        printf("\n");    /* Prints a blank line */
        playerGetsCard(&numCards, cards, playerPoints);
        playerGetsCard(&numCards, cards, playerPoints);
        do{
            ans=getAns("Hit or Stand (H/S)? ");
            if(ans == 'H'){
                playerGetsCard(&numCards, cards, playerPoints);
            }
        }while(ans!='S');
        totalIt(playerPoints, total, PLAYER);
        /* Player's total */
        do{
            dealerGetsCard(&numCards, cards, dealerPoints);
        }while(dealerPoints[ACEHIGH]<17);   /* 17: Dealer stops */
        totalIt(dealerPoints, total, DEALER); /* Dealer's total */
        findWinner(total);
        ans= getAns("\nPlay again: (Y/N)");
    }while(ans=='Y');
    return 0;
}

