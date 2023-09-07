//Raag Patel
//CECS 325-01
//Prog 1 - Fibonacci Solitaire
//February/13/2023
//I certify that this program is my own original work. I did not copy and part of this program from any other source. I further certify that I typed each and every line of code in this program

#ifndef DECK_H
#define DECK_H

#include "Card.h"
class Deck {
    
	private:
		Card size[52];
		int count;
		int index;
		
	public:
		Deck();
		void resetDeck();
		Card deal();
		void shuffle();
		bool isEmpty();
		void show();
		
};

#endif