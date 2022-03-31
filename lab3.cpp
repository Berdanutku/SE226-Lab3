#include<iostream>
using namespace std;


class Node{
public:
    int data;
Node *next;

};
Node *top=NULL;


class Stack{
public:
    bool push(int x);
    int pop();
    int topOf();
    bool isEmpty();
    int sizeOf();
    int sizeCounter=0;
 };
 bool Stack::push(int x){

 Node* tmp=new Node();
 tmp->data=x;
 tmp->next=top;
 top=tmp;
 cout<<x<<" pushed into stack\n";
 sizeCounter++;


 }
 int Stack::pop(){

 if(isEmpty()){
    cout<<"Stack is empty";
    exit(1);
 }
 else{
    Node *tmp=top;
    top=top->next;
    delete(tmp);
    sizeCounter--;

 }

 }
 int Stack::topOf(){

 if(!isEmpty()){
    return top->data;
 }
 else{
    exit(1);
 }

 }

 bool Stack::isEmpty(){

 if(top==NULL){
    return true;

 }
 else{
    return false;

 }

 }
 int Stack::sizeOf(){
 cout<<"The size of the stack is:"<< sizeCounter<<endl;
 }
 int main(){
 class Stack s;

 s.push(2);
  s.push(4);
   s.push(6);
   s.push(8);

   s.sizeOf();

   cout<<s.topOf()<<" popped from stack\n";
   s.pop();

   s.sizeOf();

   cout<<"Elements present in the stack:";
   while(!s.isEmpty()){

    cout<<s.topOf()<<" ";
    s.pop();
   }




 return 0;
 }
