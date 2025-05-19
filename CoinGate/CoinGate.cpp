#include <iostream>  
#include <string>  
#include <windows.h>
using namespace std;  

class Player {  
public:  
 int x;  
 int y;  
 string move;  
 

 Player(int dx, int dy) {  
     x = dx;  
     y = dy;  
     
 }  

 void ClearConsole() {
     system("cls");
 }
 void Map() {
     ClearConsole();
     static const int rows = 3;
     static const int cols = 4;
     char tablica[rows][cols] = {
         {'*', '*', '*', '*'},
         {'*', '*', '*', '*'},
         {'*', '*', '*', '*'}
     };
     tablica[y][x] = 'U';
     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
             cout << tablica[i][j] << " ";
         }
         cout << endl;  
     }
     cout << "pozycja x: " << x << ", pozycja y: " << y << endl;
 }

 void Position() {  
     if (move == "w") {  
         y -= 1;  
     } else if (move == "s") {  
         y += 1;  
     } else if (move == "a") {  
         x -= 1;  
     } else if (move == "d") {  
         x += 1;  
     }  
 }  
};  

int main()  
{  
 Player player(0, 0);  


 while (true) {  
     player.Position();
     player.Map();
     
     cout << "Ruch (w,a,s,d)\n";  
     cin >> player.move;  
     
     
 }  
}
