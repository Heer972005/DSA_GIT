#include<bits/stdc++.h>
using namespace std;
int sqaureSum(int n){
    int sum = 0;
    while(n>0){
        sum += pow((n%10), 2);
        n /= 10;
    }
    return sum;
}
int main(){
    int n;
    cout << "enter the number:";
    cin >> n;
    int slow = n;
    int fast = sqaureSum(n);
    while(fast!=1&&slow!=fast){
        slow = sqaureSum(slow);
        fast = sqaureSum(sqaureSum(fast));
    }
    if(fast==1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}