#include <iostream>
using namespace std;

int multiplica(int x, int y){
    int resultado = x * y;
    return resultado;
}

int main() {
  int a=2, b=3, r=0;
  
  r = multiplica(a,b);

  cout << "El resultado es "+to_string(r)+"\n";
  return 0;
}
