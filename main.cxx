/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>
#include <cmath>
#include <limits>
#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

int main() { 

  homework::printHello();

  int x = 1;
  homework::AddOneRef(x);
  REQUIRE(x == 2);

  REQUIRE(homework::isOdd(3) == true);
  REQUIRE(homework::isOdd(4) == false);
  REQUIRE(homework::isOdd(-3) == true);
  REQUIRE(homework::isOdd(-4) == false);

  REQUIRE(homework::floatToInt(3.14f) == 3);
  REQUIRE(homework::floatToInt(-3.14f) == -3);

  REQUIRE(homework::factorial(0) == 1);
  REQUIRE(homework::factorial(1) == 1);
  REQUIRE(homework::factorial(5) == 120);
  REQUIRE(homework::factorial(-1) == -1);
}

