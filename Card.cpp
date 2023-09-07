//Raag Patel
//CECS 325-01
//Prog 1 - Fibonacci Solitaire
//February/13/2023
//I certify that this program is my own original work. I did not copy and part of this program from any other source. I further certify that I typed each and every line of code in this program

#include <iostream>
using namespace std;
#include "Card.h"

Card::Card() {
	r = 'E';
	s = 'E';
	cardValue = 0;
}

Card::Card(char rank, char suit) {
	r = rank;
	s = suit;
}

void Card::setCard(char rank, char suit) {
	r = rank;
	s = suit;
}

int Card::getValue() {
	if(r == 'A') {
		return(1);
	}
	
	else if (1 <= int(r) - 48 && int(r) - 48 <= 9) {
        	return(int(r) - 48);
    	}
    
	else if(r == 'T' || 'J' || 'Q' || 'K') {
		return(10);
	}
	else {
		return(cardValue);
	}
}

void Card::show() {
    if(r == 'A') {
        cout << 'A' << s << " ";
    }
    
    else if(int(r) > 1 && int(r) < 10) {
        cout << r << s << " ";
    }
    
    else if(r == 'T') {
        cout << 10 << s << " ";
    }
    
    else if(r == 'J' || 'Q' || 'K') {
        cout << r << s << " ";
    }
    
}