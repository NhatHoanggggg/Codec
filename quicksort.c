#include <stdio.h>
int partition (int a[], int l , int r)
{
    int i = l-1 , pirvot = a[r];
    for(int j = l ; j<r ; j++)
    {
        if(a[j] <= pirvot)
        {
            ++i ;
            int tmp = a[i];a[i] = a[j] ; a[j] = tmp ;
        }
    }
    ++i ;
    int tmp = a[i] ; a[i] = a[r] ; a[r] = tmp;
    return i ;
}
void quicksort (int a[] , int l , int r)
{
    if (l < r)
    {
        int pos = partition(a , l , r);
        //xet de quy ben trai
        quicksort(a , l , pos - 1);
        quicksort(a , pos + 1 , r);
    }
}
void main()
{
    int n ;
    scanf("%d" , &n);
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a , 0 , n - 1);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", a[i]);
    }
} 
