//Raag Patel
//CECS 325-01
//Prog 1 - Fibonacci Solitaire
//February/13/2023
//I certify that this program is my own original work. I did not copy and part of this program from any other source. I further certify that I typed each and every line of code in this program

#include <iostream>
using namespace std;
#include "Deck.h"

Deck::Deck() {
	count = 52;
	index = 0;
	
	for(int i = 0; i < count; i++) {
	    if(0 < i < 13) {
	        if(i == 0) {
	            size[i].setCard('A', 'S');
	        }
	        if(i == 1) {
	            size[i].setCard('2', 'S');
	        }
	        if(i == 2) {
	            size[i].setCard('3', 'S');
	        }
	        if(i == 3) {
	            size[i].setCard('4', 'S');
	        }
	        if(i == 4) {
	            size[i].setCard('5', 'S');
	        }
	        if(i == 5) {
	            size[i].setCard('6', 'S');
	        }
	        if(i == 6) {
	            size[i].setCard('7', 'S');
	        }
	        if(i == 7) {
	            size[i].setCard('8', 'S');
	        }
	        if(i == 8) {
	            size[i].setCard('9', 'S');
	        }
	        if(i == 9) {
	            size[i].setCard('T', 'S');
	        }
	        if(i == 10) {
	            size[i].setCard('J', 'S');
	        }
	        if(i == 11) {
	            size[i].setCard('Q', 'S');
	        }
	        if(i == 12) {
	            size[i].setCard('K', 'S');
	        }
	   
	   if(i > 12 and i < 26) {
	       if(i == 13) {
	           size[i].setCard('A', 'H');
	       }
	       if(i % 13 == 1) {
	           size[i].setCard('2', 'H');
	       }
	       if(i % 13 == 2) {
	           size[i].setCard('3', 'H');
	       }
	       if(i % 13 == 3) {
	           size[i].setCard('4', 'H');
	       }
	       if(i % 13 == 4) {
	           size[i].setCard('5', 'H');
	       }
	       if(i % 13 == 5) {
	           size[i].setCard('6', 'H');
	       }
	       if(i % 13 == 6) {
	           size[i].setCard('7', 'H');
	       }
	       if(i % 13 == 7) {
	           size[i].setCard('8', 'H');
	       }
	       if(i % 13 == 8) {
	           size[i].setCard('9', 'H');
	       }
	       if(i % 13 == 9) {
	           size[i].setCard('T', 'H');
	       }
	       if(i % 13 == 10) {
	           size[i].setCard('J', 'H');
	       }
	       if(i % 13 == 11) {
	           size[i].setCard('Q', 'H');
	       }
	       if(i % 13 == 12) {
	           size[i].setCard('K', 'H');
	       }
	       
	   }
	   
	   if(i > 25 and i < 39) {
	       if(i == 26) {
	           size[i].setCard('A', 'D');
	       }
	       if(i % 13 == 1) {
	           size[i].setCard('2', 'D');
	       }
	       if(i % 13 == 2) {
	           size[i].setCard('3', 'D');
	       }
	       if(i % 13 == 3) {
	           size[i].setCard('4', 'D');
	       }
	       if(i % 13 == 4) {
	           size[i].setCard('5', 'D');
	       }
	       if(i % 13 == 5) {
	           size[i].setCard('6', 'D');
	       }
	       if(i % 13 == 6) {
	           size[i].setCard('7', 'D');
	       }
	       if(i % 13 == 7) {
	           size[i].setCard('8', 'D');
	       }
	       if(i % 13 == 8) {
	           size[i].setCard('9', 'D');
	       }
	       if(i % 13 == 9) {
	           size[i].setCard('T', 'D');
	       }
	       if(i % 13 == 10) {
	           size[i].setCard('J', 'D');
	       }
	       if(i % 13 == 11) {
	           size[i].setCard('Q', 'D');
	       }
	       if(i % 13 == 12) {
	           size[i].setCard('K', 'D');
	       }
	       
	   }
	   
	   if(i > 38 and i < 52) {
	       if(i == 39) {
	           size[i].setCard('A', 'C');
	       }
	       if(i % 13 == 1) {
	           size[i].setCard('2', 'C');
	       }
	       if(i % 13 == 2) {
	           size[i].setCard('3', 'C');
	       }
	       if(i % 13 == 3) {
	           size[i].setCard('4', 'C');
	       }
	       if(i % 13 == 4) {
	           size[i].setCard('5', 'C');
	       }
	       if(i % 13 == 5) {
	           size[i].setCard('6', 'C');
	       }
	       if(i % 13 == 6) {
	           size[i].setCard('7', 'C');
	       }
	       if(i % 13 == 7) {
	           size[i].setCard('8', 'C');
	       }
	       if(i % 13 == 8) {
	           size[i].setCard('9', 'C');
	       }
	       if(i % 13 == 9) {
	           size[i].setCard('T', 'C');
	       }
	       if(i % 13 == 10) {
	           size[i].setCard('J', 'C');
	       }
	       if(i % 13 == 11) {
	           size[i].setCard('Q', 'C');
	       }
	       if(i % 13 == 12) {
	           size[i].setCard('K', 'C');
	       }
	       
	   }
	    
	   }
    }
}

void Deck::resetDeck() {
	index = 0;
	
	for(int i = 0; i < count; i++) {
	    if(0 < i < 13) {
	        if(i == 0) {
	            size[i].setCard('A', 'S');
	        }
	        if(i == 1) {
	            size[i].setCard('2', 'S');
	        }
	        if(i == 2) {
	            size[i].setCard('3', 'S');
	        }
	        if(i == 3) {
	            size[i].setCard('4', 'S');
	        }
	        if(i == 4) {
	            size[i].setCard('5', 'S');
	        }
	        if(i == 5) {
	            size[i].setCard('6', 'S');
	        }
	        if(i == 6) {
	            size[i].setCard('7', 'S');
	        }
	        if(i == 7) {
	            size[i].setCard('8', 'S');
	        }
	        if(i == 8) {
	            size[i].setCard('9', 'S');
	        }
	        if(i == 9) {
	            size[i].setCard('T', 'S');
	        }
	        if(i == 10) {
	            size[i].setCard('J', 'S');
	        }
	        if(i == 11) {
	            size[i].setCard('Q', 'S');
	        }
	        if(i == 12) {
	            size[i].setCard('K', 'S');
	        }
	   
	   if(i > 12 and i < 26) {
	       if(i == 13) {
	           size[i].setCard('A', 'H');
	       }
	       if(i % 13 == 1) {
	           size[i].setCard('2', 'H');
	       }
	       if(i % 13 == 2) {
	           size[i].setCard('3', 'H');
	       }
	       if(i % 13 == 3) {
	           size[i].setCard('4', 'H');
	       }
	       if(i % 13 == 4) {
	           size[i].setCard('5', 'H');
	       }
	       if(i % 13 == 5) {
	           size[i].setCard('6', 'H');
	       }
	       if(i % 13 == 6) {
	           size[i].setCard('7', 'H');
	       }
	       if(i % 13 == 7) {
	           size[i].setCard('8', 'H');
	       }
	       if(i % 13 == 8) {
	           size[i].setCard('9', 'H');
	       }
	       if(i % 13 == 9) {
	           size[i].setCard('T', 'H');
	       }
	       if(i % 13 == 10) {
	           size[i].setCard('J', 'H');
	       }
	       if(i % 13 == 11) {
	           size[i].setCard('Q', 'H');
	       }
	       if(i % 13 == 12) {
	           size[i].setCard('K', 'H');
	       }
	       
	   }
	   
	   if(i > 25 and i < 39) {
	       if(i == 26) {
	           size[i].setCard('A', 'D');
	       }
	       if(i % 13 == 1) {
	           size[i].setCard('2', 'D');
	       }
	       if(i % 13 == 2) {
	           size[i].setCard('3', 'D');
	       }
	       if(i % 13 == 3) {
	           size[i].setCard('4', 'D');
	       }
	       if(i % 13 == 4) {
	           size[i].setCard('5', 'D');
	       }
	       if(i % 13 == 5) {
	           size[i].setCard('6', 'D');
	       }
	       if(i % 13 == 6) {
	           size[i].setCard('7', 'D');
	       }
	       if(i % 13 == 7) {
	           size[i].setCard('8', 'D');
	       }
	       if(i % 13 == 8) {
	           size[i].setCard('9', 'D');
	       }
	       if(i % 13 == 9) {
	           size[i].setCard('T', 'D');
	       }
	       if(i % 13 == 10) {
	           size[i].setCard('J', 'D');
	       }
	       if(i % 13 == 11) {
	           size[i].setCard('Q', 'D');
	       }
	       if(i % 13 == 12) {
	           size[i].setCard('K', 'D');
	       }
	       
	   }
	   
	   if(i > 38 and i < 52) {
	       if(i == 39) {
	           size[i].setCard('A', 'C');
	       }
	       if(i % 13 == 1) {
	           size[i].setCard('2', 'C');
	       }
	       if(i % 13 == 2) {
	           size[i].setCard('3', 'C');
	       }
	       if(i % 13 == 3) {
	           size[i].setCard('4', 'C');
	       }
	       if(i % 13 == 4) {
	           size[i].setCard('5', 'C');
	       }
	       if(i % 13 == 5) {
	           size[i].setCard('6', 'C');
	       }
	       if(i % 13 == 6) {
	           size[i].setCard('7', 'C');
	       }
	       if(i % 13 == 7) {
	           size[i].setCard('8', 'C');
	       }
	       if(i % 13 == 8) {
	           size[i].setCard('9', 'C');
	       }
	       if(i % 13 == 9) {
	           size[i].setCard('T', 'C');
	       }
	       if(i % 13 == 10) {
	           size[i].setCard('J', 'C');
	       }
	       if(i % 13 == 11) {
	           size[i].setCard('Q', 'C');
	       }
	       if(i % 13 == 12) {
	           size[i].setCard('K', 'C');
	       }
	       
	   }
	    
	   }
    }
	
}

Card Deck::deal() {
    Card c1 = size[index];
    index++;
    return c1;
}

void Deck::shuffle() {
    
    for(int i = 0; i < count; i++) {
        int randomFirst = rand() % 52;
        int randomSecond = rand() % 52;
        
        Card temporary = size[randomFirst];
        
        size[randomFirst] = size[randomSecond];
        size[randomSecond] = temporary;
    }
}


bool Deck::isEmpty() {
    if(index == 51) {
        return true;
    }
    else if(index < 51) {
        return false;
    }
}

void Deck::show() {
	for(int i = 0; i < count; i++) {
		if(i % 13 == 0) {
			cout << endl;
		}
		size[i].show();
		cout << " ";
	}
}