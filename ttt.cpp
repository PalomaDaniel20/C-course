#include <iostream>
#include "ttt_functions.hpp"
#include <vector>
int goes = 1;
std::string grid[9] = {" "," ", " ", " ", " ", " ", " ", " ", " " };
std::string player;
bool win = false;
int position;
int new_position;
std::vector <int> used ={};

int main() {
  intro();

  while( goes <= 9 && win == false){
    if (goes%2 == 0){
      player = "player2";
  }
    else{
        player = "player1";
  }

  std::cout<< player << ": Please enter a position\n";
  std::cin >> position;
  for( int i = 0; i < used.size(); i++){
    if (position == used[i]){
      std::cout << "SPACE ALREADY USED!!\n";
      std::cout << "invalid input\n";
      std::cout << "please input another position\n";
      std::cin >> position;
    }
    }
  used.push_back(position);
  fill_out_grid(goes, position, grid);
  win = WIN(grid, player,goes, win);
  goes++;
  }

 } // end of main
    

