 /*
 * Class: CPSC 223-01
 * Zac Foteff, Weston Averill, Zach Ambroseo
 * File Name: sorting_algorithm.cpp
	Definition of abstract SortingAlgorithm class that allows
	us to define multiple sorting algorithms and run them using the same
	test bench files
*/

#ifndef SORTING_ALGORITHM
#define SORTING_ALGORITHM

#include <vector>

class SortingAlgorithm
{
public:
  //  insert a number into the algorithm's array of number
  virtual void insert(const int& number) = 0;

  //  sort the keys in the algorthm and returns them in ascending order
  virtual void sort() = 0;
};


#endif
