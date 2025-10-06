#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 5;
class Queue{
    int r;
    int f;
    int Q[MAX_SIZE];
    public:
        Queue(){
            r = -1;
            f = -1;
        }
        void enqeue(int n)
        {
            if(f!=(r+1)%MAX_SIZE){
                if (f == -1)
                    f++;
                r++;
                Q[r] = n;
            }
            else
                cout << ("Full") << endl;
    }
    int dequeue()
    {
        if (f == -1)
        {
            cout << "Empty Queue" << endl;
            return -9999;
        }
        else
        {
            int x = Q[f];
            if (f == r)
            {
                f = -1;
                r = -1;
            }
            else
            {
                f = (f + 1) % MAX_SIZE;
            }
            return x;
        }
    }
    int sizeOfQueue(){
        return (f == -1) ? 0 : ((r >= f) ? (r - f + 1) : ((MAX_SIZE - f) + (r + 1)));
    }
    void printQueue()
    {
        if(f==-1)
            cout << "empty";
        cout << "Queue Elements:" << endl;
        int i = f;
        while(true){
            cout << Q[i] << endl;
            if(i==r)
                break;
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    q.enqeue(4);
    q.enqeue(5);
    q.enqeue(3);
    q.enqeue(2);
    q.enqeue(1);
    q.printQueue();
    q.dequeue();
    q.enqeue(0);
    q.printQueue();
    return 0;
}
/*#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
class Queue
{
    int f;
    int r;
    int Q[MAX_SIZE];

public:
    Queue()
    {
        f = -1;
        r = -1;
    }
    void enqueue(int x)
    {

        if (f != ((r + 1) % MAX_SIZE))
        {
            if (f == -1)
                f++;
            r = (r + 1) % MAX_SIZE;
            Q[r] = x;
        }
        else
        {
            cout << "Queue is full" << endl;
        }
        // else =
        // if (r < MAX_SIZE - 1)
        // {
        //     Q[++r] = x;
        // }
        // else
        // {
        //     cout << "Queue is full" << endl;
        // }
    }
    int dequeue()
    {
        if (f == -1)
        {
            cout << "Empty Queue" << endl;
            return -9999;
        }
        else
        {
            int x = Q[f];
            if (f == r)
            {
                f = -1;
                r = -1;
            }
            else
            {
                f = (f + 1) % MAX_SIZE;
            }
            return x;
        }
    }
    int sizeofQueue()
    {
        return f == -1 ? 0 : (r - f + 1);
    }
    void printQueue()
    {
        cout << "Queue Elements: " << endl;
        for (int i = f; i <= r; i++)
        {
            cout << " " << Q[i];
        }
        cout << endl
             << "----f:" << f << "-----r:" << r << "-------------" << endl;
    }
};
int main()
{
    Queue q;
    q.enqueue(2);
    q.printQueue();
    q.enqueue(10);
    q.printQueue();
    cout << "from dequeue: " << q.dequeue() << endl;
    q.printQueue();
    q.enqueue(50);
    q.printQueue();

    return 0;
}*/