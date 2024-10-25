#include<iostream>
using namespace std;
struct Node{

		int data;
		Node* next;
		
};
 
Node* front =NULL;
Node* rear=NULL;
void enqueue(int data){
cout<<"Enter the queue elements "<<endl;
   Node* newNode=new Node();
   newNode->data=data;
   newNode->next=NULL;
   
   if(rear==NULL){
   	front= newNode;
   	rear = newNode;
   	return;
   }
   
   rear->next=newNode;
   rear=newNode;
}

   void dequeue(){
   	if(front== NULL){
   		cout<<"Queue is empty!"<<endl;
   		return ;
	   }

	  Node* curr=front;
	   cout<<"Dequeue :"<<front->data<<endl;
	   front = front->next;
	   if (front ==NULL){
	   	rear= NULL;
	   }
	   delete curr;
	   
   }
   void empty(){
   	if(front==NULL){
   		cout<<"Queue is empty!"<<endl;
	   }
	   else{
	   	cout<<"Queue is not empty"<<endl;
	   }
}
    void display(){
    	if(front == NULL){
    		cout<<"Queue is empty!"<<endl;
   		return ;
	   }
		
		Node* curr=front;
		while(curr!=NULL){
			cout<<curr->data<<" "<<endl;
			curr=curr->next;
		}
		cout<<endl;
	}
int main(){
	enqueue(10);
	display();
	
		enqueue(20);
	display();
	
		enqueue(30);
	display();
	
	
	dequeue();
	display();
	
	empty();
	cout<<"Elements in the queue are display!"<<endl;
	return 0;	
}
