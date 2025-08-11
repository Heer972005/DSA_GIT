#include<iostream>
using namespace std;
bool isEven(int n){
    if((n&1)==0)
        return true;
    else
        return false;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    if(isEven(n)==true)
        cout << "true";
    else
        cout << "false";
    return 0;
}