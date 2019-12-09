/*
* Class: CPSC 223-01
* Zac Foteff, Weston Averill, Zach Ambroseo
* File Name: gnome_sort.cpp
 Implementation of GnomeSort class object
*/

#include <iostream>
#include <vector>
#include "gnomeSort.h"
#include "sorting_algorithm.h"
using namespace std;

GnomeSort::GnomeSort()
{
 len = 0;
 array = new int[len];
}


GnomeSort::GnomeSort(const int& ArraySize)
{
 len = ArraySize;
 array = new int[len];
}


void GnomeSort::insert(const int& number)
{
  for (int i = 0; i < len; ++i)
  {
    if (array[i] == 0)
    {
      array[i] = number;
      len++;
      return;
    }
  }
}


void GnomeSort::print()
{
  for (int i = 0; i < len; i++)
    cout << array[i] << " ";

  cout << endl;
  cout << endl;
}


void GnomeSort::sort(vector<int>& numlist)
{
  gnomeSort();
  for (int i = 0; i < len; i++)
    numlist.push_back(array[i]);
}


void GnomeSort::gnomeSort()
{
  if(len <= 1)
    return;

  else
  {
    int j=0;
    int i=1;

    while(i<len)
    {
      j = i;
      if(array[j-1]> array[j])
      {
        swap(&array[j-1], &array[j]);
        j--;
        while(j>0)
        {
          if(array[j-1]> array[j])
          {
            swap(&array[j-1], &array[j]);
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
