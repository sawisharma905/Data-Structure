#include<iostream>
using namespace std;

//function for bubble sort of the algorithm
void Bubble_sort(int A[] , int n)
{
	int temp;
	for(int k=0 ; k<n-1 ; k++)
	{
		//(n-k-1) is for ignoring comparison of elements which have already been compared in earlier iterations
		for(int i=0 ; i<n-k-1 ; i++)
		{
			if(A[i]>A[i+1])
			{
				//swapping of positions
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		} 
	}
	//displaying the sorted array
	cout<<"\nSorted array is : ";
	for(int j=0 ; j<n ; j++)
	{
		cout<<A[j]<<" ";
	}
}


//MAIN FUFNCTION
int main()
{
	int n;
	cout<<"...BUBBLE SORTING OF ARRAY...";
	cout<<"\nEnter the number of elements you want to enter in the array : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the array : ";
	for(int x=0 ; x<n ; x++)
	{
		cin>>a[x];
	}
	
	//displaying the entered array
	for(int j=0 ; j<n ; j++)
	{
		cout<<a[j]<<" ";
	}
	Bubble_sort(a , n );
}
