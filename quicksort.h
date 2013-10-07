#ifndef _QUICKSORT_HEADER__
#define _QUICKSORT_HEADER__
#include<stdio.h>
#include<stdlib.h>

//选取枢轴，将所有元素小于它的移到它的左边，大于它的移到它的右边，返回它的位置.
int partition(int A[],int low,int high);

//快速排序
void qsort(int A[],int low,int high)；

int GetMiddleValue(int A[],int low,int high);


#endif
