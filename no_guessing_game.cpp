#include <cstdlib> 
#include <iostream> 
#include <ctime> 
using namespace std; 
  
int main() 
{ 
    // This program will create different sequence of 
    // random numbers on every program run 
  
    // Use current time as seed for random generator 
    srand((unsigned int)time(NULL)); 
  
    int number = (rand() % 100)+1;
    
    int guess=0;
    
    do
    {
    	std::cout<<"Enter your guess between 1-100\n";
    	std::cin>>guess;
    	if(guess<number)
    	std::cout<<"Guess Higher\n";
    	else if(guess>number)
    	std::cout<<"Guess lower\n";
    	else
    	std::cout<<"you won\n";
    	
	}while(guess!=number);
}
