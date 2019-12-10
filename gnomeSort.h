/*
* Class: CPSC 223-01
* Zac Foteff, Weston Averill, Zach Ambroseo
* File Name: gnomeSort.h
 Definition of GnomeSort class object
*/

#ifndef GNOMESORT_H
#define GNOMESORT_H

#include <iostream>
#include "sorting_algorithm.h"

class GnomeSort : public SortingAlgorithm
{
public:
  GnomeSort();

  GnomeSort(const int& length);

  GnomeSort(const GnomeSort& rhs);

  ~GnomeSort();

  void insert(const int& number);

  void sort(std::vector<int>& num_list);

  void print();

private:
  int len;
  int size;
  int* arr;

  void gnomeSort();
  void swap(int* high, int* low);
};

#endif
