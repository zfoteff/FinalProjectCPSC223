/*
* Class: CPSC 223-01
* Zac Foteff, Weston Averill, Zach Ambroseo
* File Name: gnomeShell.h
 Definition of hybrid sorting algorithm GnomeShell
*/

#ifndef GNOMESHELL_H
#define GNOMESHELL_H

#include <iostream>
#include <sorting_algorithm.h>

class ShellSort : public SortingAlgorithm
{
public:
  GnomeShell();

  GnomeShell(const int& length);

  GnomeShell(const GnomeShell& rhs);

  ~GnomeShell();

  void insert(const int& number);

  void sort(std::vector<int>& numlist);

  void print();

private:
  int len;
  int size;
  int* arr;

  void gnomeShellSort();
  void swap (int* numHigh, int* numLow);
};

#endif
