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
    //Runs the printboardfunction
    myGame.printboard();
    if(turn == 0)
      {
      //player ones turn
      std::cout << "Player One's turn, dude" <<std::endl;

      }
    else
    {

      std::cout << "Player Two's turn, Man" <<std::endl;
    }
    while(turnOver == false)
      {
      //do the turn & sets the variable rowIn & colIn
      std::cout << "You should pick a row, dude:";
      std::cin >> rowIn;
      std::cout << "You should pick a collum, man:";
      std::cin >> colIn;
      //Puts the places on the board
      turnOver = myGame.makeMove(turn, rowIn, colIn);
      }
    turnOver = false;
    //Runs the function to see who has won
    gameOver = myGame.testForWin();

    turn++;
    turn %= 2; // alternates turn

  }
  myGame.printboard();
  if(turn == 1)
  {
    std::cout << "Thats Groovy man, The X's win";
  }
  else
  {
    std::cout << " Dang It !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! The O's win";
  }
}
