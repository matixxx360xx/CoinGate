#include <iostream>
#include <string>
using namespace std;

class Player {
public:
  int x;
  int y;
  string move;

  Player(int dx, int dy) {
      x = dx;
      y = dy;
      cout << "Tworzenie gracza na pozycji x: " << dx << ", y: " << dy << endl;
  }
  
  void Position() {
      if (move == "w") {
          y += 1;
      }else if(move == "s") {
          y -= 1;
      }
      else if (move == "a") {
          x -= 1;
      }
      else if (move == "d") {
          x += 1;
      }
      cout << "pozycja x: " << x << ", pozycja y: " << y << endl;
  }
};

int main()
{
  Player player(0, 0); 

  while (true) {
      cout << "Ruch (w,a,s,d)\n";
      cin >> player.move;
      player.Position();
  }
}
