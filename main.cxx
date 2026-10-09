/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */
#include <iostream>
#include <cmath>
#include <limits>
#include "as1.hpp"
#include "as2.hpp"
int main() { 

  homework::printHello();

  int x = 1;
  homework::AddOneRef(x);
  if (x == 2) std::cout<<"AddOneRef works"<<std::endl;
  else std::cout<<"AddOneRef does not work"<<std::endl;

  if (homework::isOdd(3) == true &&
      homework::isOdd(4) == false &&
      homework::isOdd(-3) == true &&
      homework::isOdd(-4) == false) 
  {
    std::cout<<"IsOdd works"<<std::endl;
  }
  else std::cout<<"IsOdd does not work"<<std::endl;


  if (homework::floatToInt(3.14f) == 3 &&
      homework::floatToInt(-3.14f) == -3) 
      {
        std::cout<<"floatToInt works"<<std::endl;
      }
  else std::cout<<"floatToInt does not work"<<std::endl;
 

  if (homework::factorial(0) == 1 &&
      homework::factorial(1) == 1 &&
      homework::factorial(5) == 120 &&
      homework::factorial(-1) == -1
)
    {
      std::cout<<"factorial works"<<std::endl;
    }
  else std::cout<<"factorial does not work"<<std::endl;

homework::Foo foo{};

  if (foo.bar() == 42)
    std::cout << "bar() PASSED\n";
  else
    std::cout << "bar() FAILED\n";

  if (foo.baz() == 3.14f)
    std::cout << "baz() PASSED\n";
  else
   std::cout << "baz() FAILED\n";
}

