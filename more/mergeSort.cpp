/*#include<bits/stdc++.h>
using namespace std;
void Elements(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void printElements(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}
void mergeSort(int a[],int b[],int n1,int n2){
    int i=0, j=0, k = 0;
    int n3 = n1 + n2;
    int c[n3];
    while (i<n1&&j<n2){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        c[k++] = a[i++];
    }
    while (j < n2)
    {
        c[k++] = b[j++];
    }
    printElements(c, n3);
}
int main(){
    int n1, n2;
    cout << "enter the size of 1st array:";
    cin >> n1;
    cout << "enter the elements of 1st array:"<<endl;
    int a[n1];
    Elements(a, n1);
    cout << "enter the size of 2nd array:";
    cin >> n2;
    cout << "enter the elements of 2nd array:"<<endl;
    int b[n2];
    Elements(b, n2);
    cout << "merged and sorted:";
    mergeSort(a,b,n1,n2);
    return 0;
}*/
/*
for merging 2 arrays both should be in sorted order only*/

#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
    int ls = mid - low + 1;
    int rs = high - mid;
    int la[ls];
    int ra[rs];
    // copy elements in left array from actual array
    for (int index = 0, i = low; i <= mid; index++, i++)
    {
        la[index] = a[i];
    }
    // copy elements in right array from actual array
    for (int index = 0, i = mid + 1; i <= high; index++, i++)
    {
        ra[index] = a[i];
    }
    // merge logic
    int i = 0;
    int j = 0;
    int k = low;
    while (i < ls && j < rs)
    {
        if (la[i] < ra[j])
        {
            a[k] = la[i];
            i++;
        }
        else
        {
            a[k] = ra[j];
            j++;
        }
        k++;
    }
    // copy left array if right array is empty
    while (i < ls)
    {
        a[k] = la[i];
        i++;
        k++;
    }
    // copy right array if left array is empty
    while (j < rs)
    {
        a[k] = ra[j];
        k++;
        j++;
    }
}
void merge_sort(int a[], int low, int high)
{
    if (low == high)
        return;
    int mid = low + (high - low) / 2;
    // left side
    merge_sort(a, low, mid);
    // right side
    merge_sort(a, mid + 1, high);
    // merge the left and right part
    merge(a, low, mid, high);
}
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << "Enter size";
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value of index " << i;
        cin >> arr[i];
    }

    cout << "Before sorting" << endl;
    printArray(arr, size);
    merge_sort(arr, 0, size - 1);
    cout << "After sorting" << endl;
    printArray(arr, size);

    return 0;
}