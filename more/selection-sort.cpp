#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n){
    for (int pass = 0;pass<n;pass++){
        int mIndex = pass;
        for (int i = pass + 1; i < n;i++){
            if(a[i]<a[mIndex])
                mIndex = i;
        }
        swap(a[pass], a[mIndex]);
    }
}
void printArray(int a[],int n){
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cout << "Enter the size:";
    cin >> n;
    int ar[n];
    cout << "Enter the elements:"<<endl;
    for (int i = 0; i < n;i++){
        cin >> ar[i];
    }
    printArray(ar,n);
    selection_sort(ar, n);
    printArray(ar, n);
    return 0;
}