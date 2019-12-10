/*
* Class: CPSC 223-01
* Zac Foteff, Weston Averill, Zach Ambroseo
* File Name: shellSort.h
 Definition of ShellSort class object
*/

#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <iostream>
#include "sorting_algorithm.h"

class ShellSort : public SortingAlgorithm
{
public:
  ShellSort();

  ShellSort(const int& length);

  ShellSort(const ShellSort& rhs);

  ~ShellSort();

  void insert(const int& number);

  void sort(std::vector<int>& numlist);

  void print();

private:
  int len;
  int size;
  int* arr;

  void shellSort(int arr[], int len);
  void swap (int* numHigh, int* numLow);
};

#endif
