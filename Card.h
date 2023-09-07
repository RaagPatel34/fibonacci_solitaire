//Raag Patel
//CECS 325-01
//Prog 1 - Fibonacci Solitaire
//February/13/2023
//I certify that this program is my own original work. I did not copy and part of this program from any other source. I further certify that I typed each and every line of code in this program

#ifndef CARD_H
#define CARD_H

class Card {
	private:
		char r;
		char s;
		int cardValue;
		
	public:
		Card();
		Card(char, char);
		void setCard(char, char);
		int getValue();
		void show();
};

#endif