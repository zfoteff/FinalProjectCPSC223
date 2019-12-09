#ifndef GNOMESORT_H
#define GNOMESORT_H

#include <iostream>
#include "sorting_algorithm.h"

class GnomeSort : public SortingAlgorithm
{
public:
  GnomeSort();

  GnomeSort(const int& ArraySize);

  void insert(const int& Num);

  void sort(std::vector<int>& num_list);

  void print();

private:
  int len;
  int* array;

  void gnomeSort();
  void swap(int* high, int* low);
};

#endif
