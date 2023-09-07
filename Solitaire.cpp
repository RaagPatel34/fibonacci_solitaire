//Raag Patel
//CECS 325-01
//Prog 1 - Fibonacci Solitaire
//February/13/2023
//I certify that this program is my own original work. I did not copy and part of this program from any other source. I further certify that I typed each and every line of code in this program

#include <iostream>
#include <ctime>
using namespace std;
#include "Deck.h"
#include "Card.h"

//Checks if sum is a fibonacci sequence number from the array. Stops at 987 since the highest value the deck can go to won't got that high.
bool isFibo(int n) {
    int fiboArray[] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987};
    for(int i = 0; i < 15; i++) {
        if(n == fiboArray[i]) {
            return(true);
        }
    }
    return(false);
}

int main() {
   	srand(time(0));
	cout << "Welcome to Fibonacci Solitaire!" << endl << "1) Create New Deck\n2) Shuffle Deck\n3) Display Deck\n4) Play Fibo Solitaire\n5) Win Fibo Solitaire\n6) Quit" << endl;
    	int x;
    	cin >> x;
	bool flag = true;
	Deck d1;
	int gameAmount = 0;
    
    	while(flag) {
        	//Checks to see if user input is out of bounds and will display message until x is in bounds.
        	if(x > 6 or x < 1) {
        		cout << "Enter a number between 1-6" << endl;
        		cin >> x;
        	}
    
        	//Creates new deck
        	else if(x == 1) {
            		d1.resetDeck();
            		cin >> x;
        	}
        
        	//Shuffles deck
        	else if(x == 2) {
            		d1.shuffle();
            		cin >> x;
        	}
        
        	//Shows the deck
        	else if(x == 3) {
            		d1.show();
            		cout << endl;
            		cin >> x;
        	}
        
        	//Will play Fibo Solitaire once
        	else if(x == 4) {
            		int fiboSum = 0;
            		int pileCounter = 1;
            		cout << "Playing Fibonacci Solitaire!!!" << endl << endl;
            
            		while(d1.isEmpty() == false) {
                		Card temp = d1.deal();
                		temp.show();
                		cout << ",";
                		int tempValue = temp.getValue();
                		fiboSum = fiboSum + tempValue;
                
                		if(isFibo(fiboSum)) {
                    			cout << "Fibo: " << fiboSum << endl;
                    			fiboSum = 0;
                    			pileCounter++;
                		}
                
            		}
            		if(isFibo(fiboSum)) {
                		cout << "Winner in " << pileCounter << " piles!" << endl;
                		gameAmount++;
            		} else {
                		cout << "Last pile NOT fibo: " << fiboSum << endl;
                		cout << endl;
                		cout << "Loser in " << pileCounter << " piles!" << endl;
                		gameAmount++;
            		}
            
            		cout << "Games Played: " << gameAmount << endl;
            		cout << "Please create a new deck to play again." << endl << endl;
            		cin >> x;
        	}
        
        	//Will automatically playing Fibo Solitaire until user wins
        	else if(x == 5) {
            		gameAmount = 0;
            		bool winFlag = true;
            
            		int fiboSum = 0;
            		int pileCounter = 1;
            
            		while(winFlag) {
                		d1.resetDeck();
                		d1.shuffle();
                		int fiboSum = 0;
                		int pileCounter = 1;
            
                		while(d1.isEmpty() == false) {
                    			Card temp = d1.deal();
                    			temp.show();
                    			cout << " ,";
                    			int tempValue = temp.getValue();
                    			fiboSum = fiboSum + tempValue;
                
                    			if(isFibo(fiboSum)) {
                        			cout << "Fibo: " << fiboSum << endl;
                        			fiboSum = 0;
                        			pileCounter++;
                    			}
                
                		}
                		if(isFibo(fiboSum)) {
                    			cout << "Winner in " << pileCounter << " piles!" << endl;
                    			gameAmount++;
                    			cout << "Games Played: " << gameAmount << endl;
                    			winFlag = false;
                    			cin >> x;
                		} 
                		else {
                    			gameAmount++;
                		}
            
                	}
            
        	}
        
        	//Exits user from program
        	else if(x == 6) {
            		flag == false;
            		return 0;
        	}
    	}
}
