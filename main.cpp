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
  bool turnOver = false;
  std::cout << "Welcom to tic-tac-toe" << std::endl;

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
    while(turnOver == false)
      {
      //do the turn
      std::cout << "You should pick a row, dude:";

      std::cin >> rowIn;
      std::cout << "You should pick a collum, man:";
      
      std::cin >> colIn;

      turnOver = myGame.makeMove(turn, rowIn, colIn);
      }
    turnOver = false;
    turn++;
    turn %= 2; // alternates turn

  }

}
