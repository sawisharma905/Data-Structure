#include<iostream>
using namespace std;

#define MAX 11

//Creating a class named queue
class Queue
{
	private:
		
		int A[MAX];
		int front , rear;
	
	public:
		//default constructor to set rear and front as -1
		//we are assuming that for an empty queue both front and rear will be -1
		Queue()
		{
			front=rear=-1;	
		}	
		
		//function to check whether the queue is empty or not
		bool IsEmpty()
		{
			return(front==-1 && rear==-1);
		}
		
		//function to check whether the queue is full or not
		bool IsFull()
		{
			return (rear+1)%MAX==front?true:false;
		}
		
		//function to insert an element at the rear end of the key
		void Enqueue(int x)
		{
			cout<<"Enqueuing..."<< x <<endl;
			if(IsFull())
			{
				cout<<"queue is full !!!\n";
				return;
			}
			else if(IsEmpty())
			{
				front=rear=0;
			}
			else
			{
				rear=(rear+1)%MAX;
				A[rear]=x;
			}
		}
		
		//function to remove  an element from the queue
		void Dequeue()
		{
			cout<<"Dequeuing..."<<endl;
			if(IsEmpty())
			{
				cout<<"ERROR : Queue is empty"<<endl;
				return;
			}
			else if(front==rear)
			{
				rear=front=-1;
			}
			else
			{
				front=(front+1)%MAX;
			}
		}
		
		//function to return the element in the front of the queue
		int Front()
		{
			if(front==-1)
			{
				cout<<"Can not return an element as the queue is empty !!!\n";
				return -1;
			}
			else
			return A[front];
		}
		
		//print function to print the elements of the queue
		void Print()
		{
			if(IsEmpty())
			{
				cout<<"No element in the list !!!\n";return;
			}
			else
			{
				for(int i = front; i != rear; i = (i+1)%MAX)
				cout << A[i] << " ";
		    	cout << A[rear];
			}
			cout<<endl;
		}
		
	
};


//MAIN FUNCTION..................................................

int main()
{
	Queue q;
	q.Print();
	q.Enqueue(99);q.Print();
	q.Enqueue(4);q.Print();
	q.Enqueue(5);q.Print();
	q.Dequeue();q.Print();
	q.Enqueue(7);q.Print();
	q.Enqueue(11);q.Print();
	q.Enqueue(49);q.Print();
	q.Dequeue();q.Print();
	q.Enqueue(33);q.Print();
	q.Enqueue(86);q.Print();
	q.Enqueue(55);q.Print();
	q.Enqueue(69);q.Print();
	return 0;
}
