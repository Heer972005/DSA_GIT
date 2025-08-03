#include<bits/stdc++.h>
using namespace std;
int floorSqrt(int n){
    int res = 1;
    while(res*res<=n){
        res++;
    }
    return res - 1;
}

int binaryFloorSqrt(int n){
    int low = 1, high = n;
    int res = 1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(mid*mid<n){
            res = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return res;
}
int main(){
    cout << floorSqrt(11)<<endl;
    cout << binaryFloorSqrt(11)<<endl;
    cout << sqrt(11);
    return 0;
}