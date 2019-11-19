 /*  
 * Class: CPSC 223-01
 * Zac Foteff, Weston Averill, Zach Ambroseo  
 * File Name: cocktail_sort.h      
	Definition of CocktailSort class object
*/ 

#ifndef COCKTAIL_SORT_H
#define COCKTAIL_SORT_H

#include <iostream>
#include "sorting_algorithm.h"

class CocktailSort : public SortingAlgorithm
{
 public:
   CocktailSort();

   CocktailSort(const int& length);

   void insert(const int& number);

   void sort(std::vector<int>& numbers_list);

  void print();

 private:
   int len;
   int* arr;

   void cocktailSort(int arr[], int len);
   void swap(int* numHigh, int* numLow);
};

#endif
