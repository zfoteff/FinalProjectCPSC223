#include <iostream> 
using namespace std;

#include "gnomeSort.h"

GnomeSort::GnomeSort()
{
 //len = 0;
 //arr[len];
}

void GnomeSort::printOriginalArray(int arr[], int len)
{
 for (int i = 0; i < len; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
 cout << endl;
}

void swap(int *numHigh, int *numLow)
{
 int tmp = *numHigh;
 *numHigh = *numLow;
 *numLow = tmp;
}

void GnomeSort::gnomeSort(int arr[], int len)
{
 int current = 0;
 
 while (current < len)
 {
  if (current == 0)
  {
   current++;
  }
  else if (arr[current] < arr[current-1])
  {
   swap(arr[current-1], arr[current]);
   current--;
  }
  else
  {
   current++;
  }
 }
}
 

