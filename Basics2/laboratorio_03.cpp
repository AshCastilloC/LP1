#include <iostream>
using namespace std;
int area(int length , int width);
int main ()
{
  int x4=area(10,7) ; 
  int x5 = area(1,9 ) ; 
  int x6 = area( 1, 9) ; 
  return area ( 4 , 4 ) ;
}
int area(int length, int width)
{
  return length*width ;
}
