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

GnomeShell::~GnomeShell()
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

void GnomeShell::sort()
{
  gnomeShellSort();
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
  for (int gap = len/2; gap > 0; gap /= 2)
  {
    for (int i = gap; i < len; ++i)
    {
      int temp = arr[i];
      int j = i;
      int iterStart;
      int iter;

      if (j >= gap && arr[j - gap] > temp)
      {
        arr[j] = arr[j-gap];
        j -= gap;
        continue;
      }

      iterStart = (j-gap);
      iter = (j-gap)+1;
      while (iter < i)
      {
        if (iter == iterStart || arr[iter] >= arr[iter-1])
          iter += 1;

        else
        {
          swap(&arr[iter], &arr[iter-1]);
          iter -= 1;
        }
      }
    }
  }
}


void GnomeShell::swap(int *numHigh, int *numLow)
{
  int tmp = *numHigh;
  *numHigh = *numLow;
  *numLow = tmp;
}
