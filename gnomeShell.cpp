/*
* Class: CPSC 223-01
* Zac Foteff, Weston Averill, Zach Ambroseo
* File Name: gnomeShell.cpp
 Implementation of hybrid sorting algorithm
*/

#include <iostream>
#include <vector>
#include "sorting_algorithm.h"
#include "gnomeShell.h"

using namespace std;

GnomeShell::GnomeShell()
{
  len = 0;
  size = 0;
  arr = new int[len];
}

GnomeShell::GnomeShell(const int& length)
{
  len = length;
  size = 0;
  arr = new int[len];
}

GnomeShell::GnomeShell(const GnomeShell& rhs)
: len(rhs.len)
{
  this->arr = new int[rhs.len];
  for (int i = 0; i < rhs.len; ++i)
    this->arr[i] = rhs.arr[i];

  this->size = 0;
}

GnomeShell::~GnomeShell(const GnomeShell& rhs)
{
  len = 0;
  size = 0;
  delete [] arr;
}

void GnomeShell::insert(const int& number)
{
  arr[size] = number;
  size++;
}

void GnomeShell::sort(std::vector<int> numlist)
{
  gnomeShellSort();
  for (int i = 0; i < len; ++i)
    numlist.push_back(arr[i]);
}

void GnomeShell::print()
{
  for (int i = 0; i < len; ++i)
    cout << arr[i] << endl;

  cout << endl;
  cout << endl;
}

void GnomeShell::gnomeShellSort()
{

}

void CocktailSort::swap(int *numHigh, int *numLow)
{
  int tmp = *numHigh;
  *numHigh = *numLow;
  *numLow = tmp;
}
