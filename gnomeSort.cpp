/*
* Class: CPSC 223-01
* Zac Foteff, Weston Averill, Zach Ambroseo
* File Name: gnome_sort.cpp
 Implementation of GnomeSort class object
*/

#include <iostream>
#include <vector>
#include "sorting_algorithm.h"
#include "gnomeSort.h"
using namespace std;

GnomeSort::GnomeSort()
{
 len = 0;
 size = 0;
 arr = new int[len];
}


GnomeSort::GnomeSort(const int& length)
{
 len = length;
 size = 0;
 arr = new int[len];
}


GnomeSort::GnomeSort(const GnomeSort& rhs)
: len(rhs.len)
{
  this->arr = new int[rhs.len];
  for (int i = 0; i < rhs.len; ++i)
    this->arr[i] = rhs.arr[i];

  this->size = 0;
}


GnomeSort::~GnomeSort()
{
  len = 0;
  size = 0;
  delete [] arr;
}


void GnomeSort::insert(const int& number)
{
  arr[size] = number;
  size++;
}


void GnomeSort::sort(vector<int>& numlist)
{
  gnomeSort();
  for (int i = 0; i < len; i++)
    numlist.push_back(arr[i]);
}


void GnomeSort::print()
{
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

  cout << endl;
  cout << endl;
}


void GnomeSort::gnomeSort()
{
  if(len <= 1)
    return;

  else
  {
    int j = 0;
    int i = 1;

    while(i<len)
    {
      j = i;
      if(arr[j-1]> arr[j])
      {
        swap(&arr[j-1], &arr[j]);
        j--;
        while(j>0)
        {
          if(arr[j-1]> arr[j])
          {
            swap(&arr[j-1], &arr[j]);
            j--;
          }

          else
          j = 0;
        }
      }

      i++;
    }
  }
}


void GnomeSort::swap(int *high, int *low)
{
 int temp = *high;
 *high = *low;
 *low = temp;
}
