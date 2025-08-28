#include<bits/stdc++.h>
using namespace std;


class Stack{

public:

    int size;
    int *arr;
    int top;

    Stack(){
        top = -1;
        size = 1000;
        arr = new int[size];
    }

    void Push(int ele){

        // using array
        top++;
        arr[top] = ele;
    }
    int Pop(){

        // using array
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){

        // using array
        return arr[top];
    }
    int Size(){

        // using array
        return top + 1;
    }
};


int main(){

    // implementing stac using array
        // we can not implement it dynamically, we have to know the size beforehand
    
    Stack s;

    s.Push(4);
    s.Push(5);
    s.Push(6);
    

    cout<<s.Top()<<s.Pop()<<s.Size();
}