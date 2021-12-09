#include <iostream>

using namespace std;

class Fst{
public:
  void display ()
  {
    cout << "faculté des sciences et téchniques \n";
  }
};

class Class : public Fst{
public:
  void display ()
  {
    cout << "cette filiere dans fst\n";
  }
};

int main ()
{
  Class mipc;
  mipc.display();
  return 0;
}