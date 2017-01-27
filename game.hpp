#ifndef GAME_H
#define GAME_H

class Game
{
public:
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
  void makeMove(int turn, int rowIn, int colIn){
    if(turn == 0)
    {
      board[rowIn][colIn] = 'X';
    }
    else
    {
      board[rowIn][colIn] = 'O';
    }

  }

};

#endif
