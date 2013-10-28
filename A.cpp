#include"Stack.h";
 
 
Stack::Stack( ) {
	  head=new Node() ;
  	  head->next =NULL ;
}
 
  void Stack::push( ) {
	int item;
	cout<<"print number";
	cin>>item ;

	Node *node=new Node (item);
	node->next =head->next;
	head->next =node ;
	cout<<"add"<<item<<"success"<<endl ;
	return;
};

int Stack ::pop(){
	 if(head->next==NULL )
	{
	cout<<"error,no number yet"<<endl ;
	return 0 ;
	}
	int item=head ->next ->data ;
    Node *p=head->next ;
	head->next=p->next ;
	delete p;
	cout<<"pop"<<item<<"success"<<endl ;
	return item  ;
};

bool Stack ::isEmpty(){

	if( head->next ==NULL)
	{ cout<<"stack null";
		return true;}
	else{
		cout<<"stack not null";
		return false; }


};

void main(){
	Stack stack ;
	char action;


	cout<<"(1:push"<<endl;
	cout<<"(2:pop"<<endl;
	cout<<"(3:is empty"<<endl;
	cout<<"(4:quit"<<endl;
  do{
	cin>>action;
	
	switch(action-48){
		case 1:
			stack.push();
			break;
		case 2:
			stack.pop ();
			break;
		case 3:
			stack.isEmpty();
			break;
		
		default:
			cout<<"error";
		}
	}while(1);
	
	}







		 ;








