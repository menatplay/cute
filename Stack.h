#include<iostream>
using namespace std;

class Node;
class Stack{
public:
	Stack ();
	void push();
    int pop();
	bool isEmpty();

  private:
	Node* head ;
	
};


class Node{
public:
	Node (int d):data(d){
        
		next=NULL;};
	Node *next;
	Node(){ 
		next=NULL; };
//private :
	
  int data;
};

