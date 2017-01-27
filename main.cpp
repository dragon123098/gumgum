#include <iostream>
//main loop

//sets up the board
char board[3][3] = {{' ',' ',' '},{' ',' ',' ',},{' ',' ',' '}};

void printboard()
{
  std::cout << "  0 1 2" << std::endl;
  for(int i=0; i<3; i++)
  {
    std::cout << i << "";
    for(int j=0;j<3; j++)
    {
      std::cout << board[i][j];
      if(j < 2){
        std::cout << "|";
      }
    }
    std::cout << std::endl;
    if(i<2){
      std::cout << " -----" << std::endl;
    }
  }
}

//main loop
int main()
{

  //variables
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;

  std::cout << "welcom to tic-tac-toe" << std::endl;

  //continue if there is no winner

  while(gameOver == false)
  {
    printboard();
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
    if(turn == 0)
    {
      board[rowIn][colIn] = 'X';
    }
    else
    {
      board[rowIn][colIn] = 'O';
    }
    turn++;
    turn %= 2; // alternates turn

  }

}
