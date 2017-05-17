#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <fstream>

using namespace std;

class Screen{
private:
  int nlin, ncol;

  char brush;

  vector< vector<char> > tela;
public:
  Screen(int nlin, int ncol);

  void setPixel(int x, int y);

  void clear();

  void setBrush(char brush);

  int getLinhas(void);

  int getColunas(void);

  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
