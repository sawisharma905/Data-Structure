#include<iostream>
using namespace std;

//function for bubble sort of the algorithm
void Selection_sort(int A[] , int n)
{
	int minimum;
	for(int i=0 ; i<n-1 ; i++)
	{
		minimum=i;
		for(int j=i+1 ; j<n ; j++)
		{
			if(A[j]<A[minimum])
			{
				minimum=j;
			}
		}
	//putting minimum element on its proper position
	 int temp=A[minimum];
	 A[minimum]=A[i];
	 A[i]=temp;	
	}
	//displaying the sorted array
	cout<<"\nSorted array is : ";
	for(int j=0 ; j<n ; j++)
	{
		cout<<A[j]<<" ";
	}
}

//MAIN FUNCTION..............................
int main()
{
	int n;
	cout<<"...SELECTION SORTING OF ARRAY...";
	cout<<"\nEnter the number of elements you want to enter in the array : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the array :\n ";
	for(int x=0 ; x<n ; x++)
	{
		cin>>a[x];
	}
	
	//displaying the entered array
	for(int j=0 ; j<n ; j++)
	{
		cout<<a[j]<<" ";
	}
	Selection_sort(a , n );
	return 0;
}
