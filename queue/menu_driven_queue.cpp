#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 5;
class Queue{
    int f;
    int r;
    int Q[MAX_SIZE];

    public:
        Queue(){
            f = -1;
            r = -1;
        }
    void enqueue(int x){
        if(f==-1)
            f++;
        if(r<MAX_SIZE-1)
            Q[++r] = x;
        else
            cout<<("Full")<<endl;
    }

    int dequeue(){
        if(f==-1){
            cout << "Empty" << endl;
            return -1;
        }
        else{
            int x;
            x = Q[f++];
            if(f>r){
                f = r = -1;
            }
        return x;
        }
    }

    int sizeOfQueue(){
        return (f == -1) ? 0 : (r - f + 1);
    }
    void printQueue(){
        cout<<"Queue Elements:"<<endl;
        for (int i = f; i <= r;i++)
            cout << " " << Q[i];
        cout << endl;
    }
};
int main(){

    Queue q;
    q.enqueue(2);
    q.printQueue();

    q.enqueue(10);
    q.printQueue();

    cout<<q.dequeue()<<endl;
    q.printQueue();
    q.enqueue(8);
    q.printQueue();
    cout<<q.sizeOfQueue();
    return 0;
}