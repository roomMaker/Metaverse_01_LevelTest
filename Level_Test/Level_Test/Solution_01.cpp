﻿#include <iostream>

void swap(int* a, int* b);
void swap(int& a, int& b);

void swap(int* a, int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int& a, int& b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}