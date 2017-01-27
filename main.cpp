#include <iostream>
#include "game.hpp"

//main loop
int main()
{
  Game myGame;
  //variables
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;

  std::cout << "welcom to tic-tac-toe" << std::endl;

  //continue if there is no winner

  while(gameOver == false)
  {
    myGame.printboard();
    if(turn == 0)
      {
      //player ones turn
      std::cout << "Player One's turn" <<std::endl;

      }
    else
    {

      std::cout << "Player Two's turn" <<std::endl;
    }
    //do the turn
    std::cout << "Pick a row:";
    std::cin >> rowIn;
    std::cout << "Pick a collum:";
    std::cin >> colIn;
    myGame.makeMove(turn, rowIn, colIn);
    turn++;
    turn %= 2; // alternates turn

  }

}
