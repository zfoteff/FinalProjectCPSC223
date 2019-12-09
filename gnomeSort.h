#ifndef GNOMESORT_H
#define GNOMESORT_H
using namespace std;

#include <iostream>

class GnomeSort
{
 public:
  GnomeSort();

  GnomeSort(const int& ArraySize);

  void insert(const int& Num);

  void sort();

  void print();

 private:
   int len;
   int* array;
   void swap(int* high, int* low);
};

#endif
   
