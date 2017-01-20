#include <iostream>
//main loop
char board[3][3] = {{' ',' ',' '},{' ',' ',' ',},{' ',' ',' '}};

void printboard()
{
  for(int i=0; i<3; i++)
  {
    for(int j=0;j<3; j++)
    {
      std::cout << board[i][j];
    }
    std::cout << std::endl;
  }
}

int main()
{
  int turn = 0;
  bool gameOver = false;
  std::cout << "welcom to tic-tac-toe" << std::endl;

  //sets up the board







  //continue if there is no winner

  while(gameOver == false)
  {
    printboard();
    if(turn == 0)
      {
      //player ones turn
      std::cout << "Player One's turn" <<std::cout;

      }
    else
    {

      std::cout << "Player Two's turn" <<std::cout;
    }



    turn++;
    turn %= 2; // alternates turn

  }

}
