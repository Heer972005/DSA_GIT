#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int res = min(a, b);
    while(res>0){
        if(a%res==0&&b%res==0)
            break;
        res--;
    }
    return res;
}

int gcd_euli(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;

    if(a>b)
        return gcd_euli(a - b, b);
    return gcd_euli(a, b - a);
    }

    int mod_eucl(int a,int b){
        if(a==0)
            return b;
        if(b==0)
            return a;
        if (a == b)
            return a;
            if(a>b){
                if(a%b==0)
                    return b;
                return mod_eucl(a - b, b);
            }
            if(b%a==0)
                return a;
            return mod_eucl(a, b - a);
    }

    int opti_eucl(int a,int b){
        return b == 0 ? a : opti_eucl(b, a % b);

    }
int main(){
    int a = 20, b = 28;
    cout << gcd(a, b)<<endl;
    cout << gcd_euli(a, b)<<endl;
    cout << mod_eucl(a, b)<<endl;
    cout << opti_eucl(a, b);
    return 0;
}