#include <iostream>
#include <vector>
#include "sorting_algorithm.h"
#include "shellSort.h"
using namespace std;

ShellSort::ShellSort()
{
  len = 0;
  size = 0;
  arr = new int[len];
}


ShellSort::ShellSort(const int& length)
{
  len = length;
  size = 0;
  arr = new int[len];
}


ShellSort::ShellSort(const ShellSort& rhs)
: len(rhs.len)
{
  this->arr = new int[rhs.len];
  for (int i = 0; i < rhs.len; ++i)
    this->arr[i] = rhs.arr[i];

  this->size = 0;
}


ShellSort::~ShellSort()
{
  len = 0;
  size = 0;
  delete [] arr;
}


void ShellSort::insert(const int& number)
{
  arr[size] = number;
  size++;
}


void ShellSort::sort(std::vector<int>& numbers_list)
{
  shellSort(arr, len);
  for (int i = 0; i < len; ++i)
    numbers_list.push_back(arr[i]);
}


void ShellSort::print()
{
 for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

 cout << endl;
 cout << endl;
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
        arr[j] = arr[j-gap];

      arr[j] = temp;
    }
  }
}


void ShellSort::swap(int *numHigh, int *numLow)
{
  int tmp = *numHigh;
  *numHigh = *numLow;
  *numLow = tmp;
}
