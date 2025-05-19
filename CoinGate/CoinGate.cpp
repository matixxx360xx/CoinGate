#include <iostream>  
#include <string>  
#include <windows.h>
using namespace std;  

class Player {  
public:  
int x;  
int y;  
int C = 0;
int D = 0;
string move;  

static const int rows = 3;
static const int cols = 4;
char tablica[rows][cols] = {
    {'*', '*', '*', '*'},
    {'*', '*', '*', 'C'},
    {'*', 'D', '*', '*'}
};

Player(int dx, int dy) {  
    x = dx;  
    y = dy;  
    
}  

void ClearConsole() {
    system("cls");
}

void Map() {
    ClearConsole();
  
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == y && j == x) {
                cout << 'U' << " ";
            } else{
                cout << tablica[i][j] << " ";
        }
        }
        cout << endl;  
    }
    if (x == 3 && y == 1 && tablica[1][3] == 'C') {
        C += 1;
        tablica[1][3] = '*'; 
        cout << "Zebrane C: " << "Zebrano klucz!" << endl;
    }
    if (x == 1 && y == 2 && C ==1 ) {
        cout << "Gratulacje otworzyles drzwi!" << endl;
    }
    else {
        cout << "Zdobadz klucz!" << endl;
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
