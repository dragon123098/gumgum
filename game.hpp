#ifndef GAME_H
#define GAME_H

class Game
{
public:
  //sets variables
  char board[3][3];

  Game()
  //puts all variables to blank
  {
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        board[j][i] = ' ';
      }
    }
  }


  //Printboard function
  void printboard()
  {
    //sets up the board
    std::cout << "  0 1 2" << std::endl;
    for(int i=0; i<3; i++)
    {
      std::cout << i << " ";
      for(int j=0;j<3; j++)
      {
        std::cout << board[i][j];
        if(j < 2){
          std::cout << "|";
        }
      }
      std::cout << std::endl;
      if(i<2){
        std::cout << "  -----" << std::endl;
      }
    }
  }
  //makeMove function
  bool makeMove(int turn, int rowIn, int colIn){
    if(rowIn<0 || rowIn>2 || colIn<0 || colIn>2)
    {
      std::cout << "ERROR ERROR ERROR. DUDE, THAT MOVE IS OUT SIDE THE BOARD " <<std::endl;
      return false;
    }
    else if(board[rowIn][colIn] != ' ')
    {
      std::cout<<"GOSH MAN. THAT ONES TAKEN. I CAN'T BELIVE YOU." << std::endl;
      return false;
    }

    else
    {
      if(turn == 0)
      {
        board[rowIn][colIn] = 'X';
        }
      else
      {
        board[rowIn][colIn] = 'O';

      }
      std::cout << "Good choice Man" << std::endl;
      return true;
    }
  }
  //test for win function
  bool testForWin()
  {
    //Checks all the rows
    for(int i=0; i < 3; i++)
    {
      if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
      {
        return true;
      }
    }
    //Checks all the collums
    for(int i=0; i < 3; i++)
    {
      if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
      {
        return true;
      }
    }
    //test the diagnols
    if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
    {
      return true;
    }
    if(board[2][2] == board[1][1] && board[1][1] == board[0][0] && board[0][0] != ' ')
    {
      return true;
    }
    return false;
  }
};

#endif
