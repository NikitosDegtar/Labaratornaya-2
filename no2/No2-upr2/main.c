#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Russian");
   float a, b, c, x, y;
   cout << "Введите a: ";
   cin >> a;
   cout << "Введите b: ";
   cin >> b;
   cout << "Введите c: ";
   cin >> c;
   x = (a + b + c) / 3;
   cout << "Среднее арифметическое = " << x << endl;
   y = pow(a*b*c, 1/3);
   cout << "Среднее геометрическое = " << y;
   getch();
   return 0;    
}