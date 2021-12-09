#include <iostream>
using namespace std;
class Shape
{
protected:
  float heutour, largeur;
public:
  Shape(float x, float y)
  {
    heutour = x;
    largeur = y;
  }
};
class Rectangle: public Shape
{
public:
  Rectangle(float x, float y) : Shape(x, y) {}
  float area()
  {
    return (heutour * largeur);
  }
};
class Triangle: public Shape
{
public:
  Triangle(float x, float y) : Shape(x, y) {}
  float area()
  {
    return (heutour * largeur / 2);
  }
};
int main (){
  Rectangle rectangle(12,3.5);
  Triangle triangle(7,3);
  cout <<  " l'air de rectangle est : "<<rectangle.area() << endl;   
  cout << "l'air de triangle est : "<< triangle.area() << endl;    
  return 0;
}