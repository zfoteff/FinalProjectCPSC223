 /*
 * Class: CPSC 223-01
 * Zac Foteff, Weston Averill, Zach Ambroseo
 * File Name: project.cpp
	Main method for running sorting algorithm tests of a specified dataset
*/

#include <iostream>
#include "gnomeSort.h"
#include "gnomeSort.cpp"
#include "cocktailSort.h"
#include "cocktailSort.cpp"
#include "sorting_algorithm.h"
#include "test_driver.h"

using namespace std;

int main(int argc, char** argv)
{
  if (argc != 3)
  {
    cout<<"Usage: "<<argv[0]<<" filename # of elements"<<endl;
    return 1;
  }

  int new_length = atoi(argv[2]);
  CocktailSort* c = new CocktailSort(new_length);
  TestDriver driver(argv[1], c);
  driver.run_tests();
  driver.print_results();
}
