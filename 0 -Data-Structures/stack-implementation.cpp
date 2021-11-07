#include "iostream"
#include "bits/stdc++.h"
#include "string"
using namespace std;

class Stack {
private:
    bool isEmpty()
    {
      return top == -1;
    }
    bool isFull()
    {
      return top == 10;
    }
public:
    int num[10];
    int top = -1;
    void push(int ele)
    {
      if(!isFull())
      {
        top++;
        num[top] = ele;
      }
      else cout<<"Stack overflow"<<endl;
    }
    void pop()
    {
      top--;
    }
    void display()
    {
      for (int i = top; i >= 0 ; --i) {
        cout<<num[i]<<" ";
      }
    }
};

int main()
{
  Stack s;
  //1 - Push
  //2 - Pop
  //3 - Display
  vector<int> arr = {1,10,1,20,1,30,2,1,34,1,78,1,56,2,2,3};
  for (int i = 0; i < arr.size(); ++i) {
    if(arr[i] == 1){
      s.push(arr[i + 1]); i++;
    }
    else if(arr[i] == 2){
      s.pop();
    }
    else if(arr[i] == 3){
      s.display();
    }
  }
}