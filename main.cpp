#include <iostream>
using namespace std;

int main() {
  //constants
  const double length = 7.2;
  const double width = 1.3;

  //varibles and computation
double area = length * width;
double perimeter = (length+width)*2;

//output
cout << "Rectangle properies:" << endl;
cout << "Length = "<< length << endl;
cout << "Width = " << width << endl;
cout << "Area = "<< area << endl;
cout << "Perimeter = " << perimeter << endl;

}