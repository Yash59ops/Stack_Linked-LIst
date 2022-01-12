#include<iostream>
using namespace std;
class stack {
  private:
    struct node {
        int data;
        node*next;
    };
    node*top;
  public:
    stack() {
        top==NULL;
    }
    void push(int data) {
        node*n=new node;
        n->data=data;
        n->next=top;
        top=n;
    }
    void pop() {
        if(top==NULL) {
            cout<<"stack overflow";
        } else {
            node*t=top;
            top=top->next;
            delete t;
        }
    }
    int peek() {
        if(top==NULL) {
            cout<<"stack empty";
        } else {
            return top->data;
        }
    }
};
int main() {
    stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.pop();
    int a=obj.peek();
    cout<<a;
    return 0;
}
