#include <iostream>
#include "ufo_functions.hpp"

std::string codeword = "codecademy";
std::string answer = "----------";
int misses = 1;
std::vector<char>incorrect={};
bool guess = false;
char letter;

 int main() {
    greet();
    //while loop
    while( answer != codeword && misses < 7){
      display_misses(misses);
      display_status(incorrect , answer);
      std::cout<< "please enter your guess:  ";
      std::cin >> letter;

    // check whether input is correct
      for( int i = 0; i < codeword.length();i++){
        if( letter == codeword[i]){
          answer[i] = letter;
          guess = true;
      } //end of for loop
    }
        if( guess == true){
        std::cout << "Correct!";
    }
      else{
      std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    } // end of else 

    guess = false;
  }//end of while
  end_game(answer, codeword);
}
