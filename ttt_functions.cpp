#include <iostream>
#include <vector>

void intro(){
  std::cout << " WELCOME TO \n";
std::cout << "-------------\n";
std::cout << "TIC TAC TOE\n";
std::cout << "-------------\n";

//grid layout 
std::cout << "     |     |     \n";
std::cout << "  1  |  2  |  3  \n";
std::cout << "_____|_____|_____\n";
std::cout << "     |     |     \n";
std::cout << "  4  |  5  |  6  \n";
std::cout << "_____|_____|_____\n";
std::cout << "     |     |     \n";
std::cout << "  7  |  8  |  9  \n";
std::cout << "     |     |     \n";
}

void fill_out_grid(int goes, int position, std::string grid[9]){
  if( goes% 2 != 0){
    grid[position -1] = 'x';
  }
  else if( goes%2 == 0){
    grid[position -1] = 'o';
  }

  std::cout << "     |     |     \n";
  std::cout << "  "<<grid[0]<< "  |  "<< grid[1]<<"  |  " << grid[2]<<"  \n";
  std::cout << "_____|_____|_____\n";
  std::cout << "     |     |     \n";
  std::cout << "  "<< grid[3] << "  |  "<< grid[4]<<"  |  " << grid[5]<<"  \n";
  std::cout << "_____|_____|_____\n";
  std::cout << "     |     |     \n";
  std::cout << "  "<< grid[6] << "  |  "<< grid[7]<<"  |  " << grid[8]<<"  \n";
  std::cout << "     |     |     \n";
 

}
bool WIN( std::string grid[9], std::string player,int goes, bool win){
  while(goes < 5){
    return(win);
  }
  
  //horizontal 1
  if (( grid[0] == grid[1] && grid[0] == grid[2])&& grid[0] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //horizontal 2
    else if ((grid[3] == grid[4] && grid[3] == grid[5])&& grid[3] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //horizontal 3
    else if (( grid[6] == grid[7] && grid[6] == grid[8])&& grid[6] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //diagonal 1
  else if (( grid[0] == grid[4] && grid[0] == grid[8])&& grid[0] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //diagonal 2
  else if (( grid[2] == grid[4] && grid[2] == grid[6])&& grid[2] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //vertical 1
    else if (( grid[0] == grid[3] && grid[0] == grid[6])&& grid[0] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //vertical 2
    else if (( grid[1] == grid[4] && grid[1] == grid[7])&& grid[1] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  //vertical 3
    else if (( grid[2] == grid[5] && grid[2] == grid[8])&& grid[2] != " "){
    win = true;
    std::cout << player << " HAS WON!!CONGRATS!!\n";
  }
  else{
    return(win);
  }
  return(win);
}




