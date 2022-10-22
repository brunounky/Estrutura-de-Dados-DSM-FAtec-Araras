#include <iostream>
#include <locale>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
  int x,y;
  for(x=2; x <= 10; x++)
  {
     for(y=1; y <= 10; y++) {
        if (y == 10) {
           cout << x << "  * " << y << "  = " << x*y << endl;
        } else {
           cout << x << "  *  " << y << "  = " << x*y << endl;
        }
     }
     cout << endl;
  }
  system("pause");
}
