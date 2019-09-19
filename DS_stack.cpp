#include<iostream>
using namespace std;

#define MAX 100
int A[MAX];
 
class stack
{   
    private:
	  int top;
	  
	public:
	  stack()
	  {
	  	top=-1;
	  }
	  
	void push(int x)
	{
		if(top==MAX-1)
		{cout<<"overflow"<<endl; return;}
	   A[++top]=x;		
    }  
	
	void pop()
	{ 
		int k;
		if(top==-1)
	    	{cout<<"underflow!!!"<<endl;}
		k=A[top--];
		cout<<"element "<<k<<" deleted !!"<<endl;	
	}
	
	void Top()
	{
	  cout<<A[top]<<endl;	
    }	
	
	void print()
	{
		int i=0;
		while(i!=top+1)
		{
			cout<<A[i++]<<" ";	
		}
		cout<<endl;
	}
	
		
 } s;
 
 int main()
 {
 	//s.pop();s.print();
 	s.push(2);s.print();
 	s.push(5);s.print();
 	s.push(6);s.print();
 	s.push(9);s.print();
 	s.push(8);s.print();
 	s.pop();s.print();
 	s.push(1);s.print();
 	s.Top();
 	return 0;
 }
