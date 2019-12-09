#include <iostream>
#include "GnomeSort.h"
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
 for(int i=0; i<len; i++)
  array[i]=0;
}

void GnomeSort::insert(const int& Num)
{
 if(Num==0 || Num<0)
  cout << "Invalid Insert" << endl;
 else
 {
  for( int i=0; i<len; i++)//For inserts without full
   if(array[i]==0)
   {
    array[i]=Num;
    return;
   }
 }
}

void GnomeSort::sort()
{
 if(len<1)
  cout << "Already Sorted, ArraySize too small" << endl;
 else
 {
  int j=0;
  int i=1;
  while(i<len)
  {
   j=i;
   cout << endl;
   cout << array[j] << " " << array[j-1] << endl;
   if(array[j-1]> array[j])
   {
    swap(&array[j-1], &array[j]);
    j--;
    while(j>0)
     if(array[j-1]> array[j])
     {
      cout << array[j] << " " << array[j-1] << endl;
      swap(&array[j-1], &array[j]);
      j--;
      cout << j << endl;
     }
     else
     {
      j=0;
     }
   }
   i++;
  }
 }
}

void GnomeSort::print()
{
 for(int i=0; i<len; i++)
  cout << array[i] << " ";
 cout << endl;
}

void GnomeSort::swap(int *high, int *low)
{ 
 cout << "swap" << endl;
 int temp = *high;
 *high = *low;
 *low=temp;
}






