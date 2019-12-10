 /*
 * Class: CPSC 223-01
 * Zac Foteff, Weston Averill, Zach Ambroseo
 * File Name: cocktail_sort.cpp
	Implementation of CocktailSort class object
*/

#include <iostream>
#include <vector>
#include "cocktailSort.h"
#include "sorting_algorithm.h"
using namespace std;

CocktailSort::CocktailSort()
{
  cout<<"DVC called"<<endl;
  size = 0;
  len = 0;
  arr = new int[len];
}

CocktailSort::CocktailSort(const int& length)
{
  cout<<"EVC called"<<endl;
  len = length;
  size = 0;
  arr = new int[len];
}

CocktailSort::CocktailSort(const CocktailSort& rhs)
: len(rhs.len), size(rhs.size)
{
  this->arr = new int[rhs.len];
  for (int i = 0; i < rhs.len; ++i)
    this->arr[i] = rhs.arr[i];
}

CocktailSort::~CocktailSort()
{
  len = 0;
  delete [] arr;
}

void CocktailSort::insert(const int& number)
{
  arr[size] = number;
  size++;
}


void CocktailSort::print()
{
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

  cout << endl;
  cout << endl;
}

void CocktailSort::sort(std::vector<int>& numbers_list)
{
  cocktailSort(arr, len);
  for (int i = 0; i < len; ++i)
    numbers_list.push_back(arr[i]);
}

void CocktailSort::cocktailSort(int arr[], int len)
{
  int startPoint = 0;
  int last = len-1;
  bool keepGoing = true;

  while (keepGoing)
  {
    keepGoing = false;
    for (int i = startPoint; i < last; i++)
    {
      if (arr[i] > arr[i+1])
      {
        swap(&arr[i], &arr[i+1]);
        keepGoing = true;
      }
    }

    last--;

    for (int j = last-1; j >= startPoint; j--)
    {
      if (arr[j] > arr[j+1])
      {
        swap(&arr[j], &arr[j+1]);
      }
    }
    startPoint++;
  }
}

void CocktailSort::swap(int *numHigh, int *numLow)
{
  int tmp = *numHigh;
  *numHigh = *numLow;
  *numLow = tmp;
}
