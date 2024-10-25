#include<iostream>
using namespace std;
int queue[10];
int front=-1;
int rear=-1;
		
		void enqueue(int value){
			if(rear==9){
			
				cout<<"Queue is Full!"<<endl;
				
				return;
			}
			if(front==-1){
				front=0;
			}
			
			rear++;
			queue[rear]=value;
			cout<<"Enqueue in the queue :" << value<<endl;
		}
		void dequeue(){
			if(front == -1 ){
				cout<<"Queue is empty"<<endl;
				return;
			}
			cout<<"Dequeue "<<queue[front] << " from the queue"<<endl;
			front++;
		
		}
		void empty(){
				if(front == -1 ){
				cout<<"Queue is empty"<<endl;

			}
			else{
				cout<<"Queue is not empty"<<endl;
			}
		}
	

	void display(){
		
		if(front ==-1){
			cout<<"Queue is empty"<<endl;
			return;	
		}
		cout<<"Queue element are:"<<endl;
		for(int i=front;i<=rear ; i++){
			cout<<queue[i]<<" "<<endl;
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