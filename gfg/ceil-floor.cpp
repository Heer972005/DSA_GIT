#include<bits/stdc++.h>
using namespace std;
int floorDiv(int a,int b){
    int q = a / b;
    if((a^b)<0&&a%b!=0){
        q--;
    }
    return q;
}
int ceilDiv(int a,int b){
    int q = a / b;
    if((a^b)>0&&a%b!=0){
        q++;
    }
    return q;
}
vector<int>divFloorCeil(int a,int b){
    vector<int> res;
    res.push_back(floorDiv(a, b));
    res.push_back(ceilDiv(a, b));
    return res;
}
int main(){
    int a, b;
    cout << "enter 2 numbers:";
    cin >> a >> b;
    vector<int> res = divFloorCeil(a, b);
    cout << res[0] << ' ' << res[1] << endl;
    return 0;
}