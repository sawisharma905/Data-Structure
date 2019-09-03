#include<iostream>
using namespace std;

void Insert_element(int p[] , int c2 , int c3);
void Insert_array(int p[]);
void Update(int x[] , int y , int z);
void Linear_Search( int p[] , int m );
int Binary_Search( int p[] , int l , int r , int m );
void Delete( int p[] , int x);
void Bubble_sort(int q[]);
void *Merge(int a[],int m , int b[] , int n);
int a[11] , b[11];
int main()
{
    int n, w , x , y , z , q ;char c1 , Ans;
    cout<<"Enter the array a :\n";
    Insert_array(a);
    cout<<"Enter the array b :\n";
    Insert_array(b);


    do
    {
        cout<<"Choose the operation you want to get performed:\n1.ELEMENT INSERTION\n2.LINEAR SEARCH\n3.BINARY SEARCH\n4.ARRAY UPDATE\n5.BUBBLE SORT AND MERGING\n6.ARRAY ELEMENT DELETION\n";
    cin>>n;

    switch(n)
    {
    case 1:{
             int  c2 , c3;
            cout<<"...ELEMENT INSERTION...\n";
            cout<<"Choose the array a or b in which you want to insert the element:  ";
            cin>>c1;
            cout<<"\nenter an integer element to be inserted :\n";
            cin>>c2;
            cout<<"enter the position at which the element to be inserted :\n";
            cin>>c3;

            if(c1=='a')
                Insert_element(a, c2 ,c3);
            else
                Insert_element(b, c2 ,c3);
           }
    case 2:{cout<<"...LINEAR SEARCH...";
            cout<<"Choose the array a or b in which you want to 'Linearly' search the element:  ";
            cin>>c1;
            cout<<"\nenter the stored value to be searched:";
            cin>>w;
            if(c1=='a')
                Linear_Search(a,w);
            else
                Linear_Search(b,w);
            break;
           }
    case 3:{cout<<"...BINARY SEARCH...";
            cout<<"Choose the array a or b in which you want to 'binary' search the element:  ";
            cin>>c1;

            if(c1=='a')
                {   int aaa;
                    aaa=sizeof(a)/sizeof(a[0]);
                    int index=Binary_Search(a ,0 , aaa-1 , w);
                    cout << "Element is present at index " << index;
                }
            else
                 {   int aaa;
                    aaa=sizeof(b)/sizeof(b[0]);
                    int index=Binary_Search(b ,0 , aaa-1 , w);
                    cout << "Element is present at index " << index;
                }
            break;
           }
    case 4:{cout<<"...ARRAY UPDATE...";
            cout<<"Choose the array a or b in which you want to update the element:  ";
            cin>>c1;
            cout<<"\nenter the location from which you want to update the array(1-10):";
            cin>>y;
            cout<<"\nenter the new number: ";
            cin>>q;
            if(c1=='a')
                Update( a , y , q );
            else
                Update( b , y , q );
            break;
           }
    case 5:{cout<<"...BUBBLE SORT AND MERGING...";
            cout<<"bubble sorting and merging of arrays a and b:  ";
                Bubble_sort(a);
                Bubble_sort(b);
                int m;
                    m=sizeof(a)/sizeof(a[0]);
                int r;
                    r=sizeof(b)/sizeof(b[0]);
              void *merged= Merge( a,m , b , r);
              cout<<"Merged array is: \n";
              for(int ggg=0 ; ggg<m+n ; ggg++)
              {
                  cout<<*merged;
                  merged++;
              }
            break;
           }
    case 6:{cout<<"...ARRAY ELEMENT DELETION...";
            cout<<"Choose the array a or b from which you want to delete the element:  ";
            cin>>c1;
            cout<<"\nenter the value to be deleted from the stored array:";
            cin>>x;
            if(c1=='a')
                Delete( a , x );
            else
                Delete( b , x );
            break;
           }
    default:{cout<<"INVALID CHOICE !!!";
            break;
           }

    }

    cout<<"Do you want to perform more operations ?\n ('y' or 'n')";
    cin>>Ans;

  }while(Ans=='y'|| Ans=='Y');


    return 0;
}

void Insert_element(int p[] , int c2 , int c3)
{
    int aaa;
    aaa=sizeof(p)/sizeof(p[0]);

        while(c3!=aaa)
        {
         p[aaa+1]=p[aaa];
         aaa--;
        }
     p[aaa]=c2;

     cout<<"\narray after insertion:";
     for(int i=0 ; i<aaa ; i++)
     {
         cout<<p[i]<<" ";
     }

     return;

}

void Insert_array(int p[])
{

    cout<<"enter the values:\n";
    for(int i=0 ; i<10 ; i++)
    {
        cin>>a[i];
    }
    cout<<"inserted array:\n";
 for(int i=0 ; i<10 ; i++)
    {
        cout<<a[i]<<" ";
    }
   return;
}

void Update( int x[] ,int p , int q )
{   if(p>=11)
       {cout<<"\ninvalid location\n";goto qqq;}
    else
        {x[p-1]=q;
    cout<<"updated array:\n";
    for(int i=0 ; i<10 ; i++)
    {
        cout<<x[i]<<" ";
    }
        }
    qqq:
   return ;
}

void Linear_Search( int p[] , int w)
{
   for(int i=0 ; i<11 ; i++)
    {
        if(p[i]==w)
             goto ppp;
    }
    cout<<"value not found in array ";return;
      ppp:
        {cout<<"value found in array ";return;}
 return;

}

void Delete(int p[] , int v)
 {   cout<<"\narray before deletion:\n";
 for(int i=0 ; i<10 ; i++)
    {
        cout<<a[i]<<" ";
    }
     for(int i=0 ; i<10 ; i++)
    {
        if(a[i]==v)
        {
            for(int u=v ; u<9 ; u++)
            {
                a[i]=a[i+1];
            }
        }
    }

    cout<<"\nnew array after deletion:\n";
    for(int i=0 ; i<9 ; i++)
    {
        cout<<a[i]<<" ";
    }

 }

 int Binary_Search( int p[] ,int l , int  r , int m )
 {
    Bubble_sort( p);
   if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (p[mid] == m)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        else if (p[mid] > m)
            return Binary_Search(p, l, mid - 1, m);

        // Else the element can only be present
        // in right subarray
        else if (p[mid] < m)
            return Binary_Search(p, mid + 1, r, m);
    }

    // We reach here when element is not
    // present in array
        else
            {
                cout << "Element is not present in array";
                return -1;
            }
 }

 void Bubble_sort(int q[])
 { int temp , i ;
     for(i=0 ; i<11 ; i++)
     {
         for (int j=1 ; j<11-i-1 ; j++)
         {
             if(q[j]>q[j+1])
             {
                  temp=q[j+1];
                  q[j+1]=q[j];
                  q[j]=temp;
             }

         }
     }
     cout<<"\nsorted array:\n";
     for(int i=0 ; i<11 ; i++)
        cout<<q[i]<<" ";
     return;
 }

void *Merge(int a[],int m , int b[] , int n)
 {
     int na , nb , nc , c[22];
     while((na<m)&&(nb<n))
     {
         if(a[na]<b[nb])
            {c[nc]=a[na++];nc++;}
         else
            {c[nc]=b[nb++];nc++;}
     }
     if(na==m)
        {while(nb<n)
         c[nc++]=b[nb++];}
     else if(nb==n)
          {while(na<m)
         c[nc++]=a[na++];}

     return c;
 }

/*#include <iostream>
using namespace std;

int main() {
	//code
	int T , N , arr[100] ,k, temp , p=0;
	cout<<"test cases:";
	cin>>T;
	//looping condition for test cases
	while(p<T)
	{cout<<"enter the no of elements:";
	cin>>N;
	for(int a=0 ; a<N ; a++)
	{
	    cin>>arr[a];
	}
	cout<<"ënter the position of the element to be found:";
	cin>>k;
	for(int i=0 ; i<N ; i++)
	{
	    	for(int j=0 ; j<N-i-1 ; j++)
	    	{if(arr[j]>arr[j+1])
	    	{
	    	    temp=arr[j+1];
	    	    arr[j+1]=arr[j];
	    	    arr[j]=temp;
	    	}}
	}
	cout<<"\nsorted array:";
	for(int b=0 ; b<N ; b++)
    {
      cout<<arr[b];
    }
	cout<<endl<<arr[k-1];
	p++;
	}
	return 0;
}
*/
