#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int trg){
    int low = 1, high = n,mid;
    if(low<=high){
        mid = low + ((high - low) / 2);
        if (a[mid] == trg) return a[mid];
        else if(a[mid]<trg){
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return a[mid];
}
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int n,trg;
    cout << "enter size:";
    cin >> n;
    int a[n];
    cout << "enter the elements:";
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << "print\n";
    printArray(a,n);
    cout << "Enter the target";
    cin >> trg;
    cout << "target found at " << binarySearch(a, n, trg);
    return 0;
}