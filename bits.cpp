#include <iostream>
using namespace std;
class bits {
   const char* p;

public:
   // default constructor
   bits()
   {
       // allocating memory at run time
       p = new char[6];
       p = "bits";
   }
   void display()
   {
       cout << p << endl;
   }
};
int main()
{
   bits obj;
   obj.display();
}