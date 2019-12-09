#include <iostream> 
using namespace std;

#include "shellSort.h"

ShellSort::ShellSort()
{
 //len = 0;
 //arr[len];
}

void ShellSort::printOriginalArray(int arr[], int len)
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

void ShellSort::shellSort(int arr[], int len)
{
 for (int gap = len/2; gap > 0; gap /= 2)
 {
  for (int i = gap; i < len; i+=1)
  { 
   int temp = arr[i];
   int j;
    for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
    {
     arr[j] = arr[j-gap];
    }
    arr[j] = temp;
   }
  }  
}