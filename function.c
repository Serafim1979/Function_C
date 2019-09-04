#include"function.h"
////////////////////////////////////////////////////
int my_power(int base, int n)
{
    int i, p;
    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
////////////////////////////////////////////////////
void my_swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
////////////////////////////////////////////////////
void my_qsort(int v[], int left, int right)
{
    int i, last;
    void my_swap(int v[], int i, int j);

    if(left >= right)
        return;
    my_swap(v, left, (left + right)/2);
    last = left;
    for(i = left + 1; i <= right; i++)
        if(v[i] < v[left])
            my_swap(v, ++last, i);
    my_swap(v, left, last);
    my_qsort(v, left, last - 1);
    my_qsort(v, last + 1, right);
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////
