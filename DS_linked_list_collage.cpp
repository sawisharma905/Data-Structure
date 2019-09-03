#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
};

//functions.....................................

//CREATING AN EMPTY LIST

    node *head=NULL;

//CREATING A SINGLE NODE AT THE BEGINNING
void Beg_Node(node *head , int new_data)
{
    node* temp= new node();
    temp->data=new_data;
    head->next=temp;
    temp->next=NULL;
    return;
}

//CREATING A SINGLE NODE IN BETWNEEN THE LIST
void Mid_node(node *prev_node, int new_data , int node_no )
{
    int m1=2;
   if(prev_node==NULL)
    {
        cout<<"the given previous node can not be null";
        return;
    }

    node* temp=head->next;
    while((m1<node_no)&&(temp->next!=NULL))
    {
        temp=temp->next;
        m1++;
    }

    node* temp1= new node();
    temp1=temp;
    temp1-> data= new_data;
    temp1->next=prev_node->next;
    prev_node->next=temp;
    return ;
}

//CREATING A SINGLE NODE AT THE END
 End_node(node *temp , int new_data)
 {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* temp1= new node();
    temp1=temp;
    temp1-> data= new_data;
    temp1->next=NULL;
 }

 void print_node(node *temp)
 {
      while(temp->next!=NULL)
      {
         cout<<temp->data;
         temp=temp->next;
      }
      return;

 }

int main()
{
    char ans; int a , b , n , c1;

    do
    {
        cout<<"Choose the operation you want to get performed:\n1.CREATE NODE\n2.LINEAR SEARCH\n3.BINARY SEARCH\n4.ARRAY UPDATE\n5.BUBBLE SORT AND MERGING\n6.ARRAY ELEMENT DELETION\n";
    cin>>n;

    switch(n)
    {
    case 1:{cout<<"\nCREATING NODE\n";
            cout<<"enter a data\n";
            cin>>a;
            cout<<"Choose the option:(\n1. Beginning\n2. In between\n3. End)\n";
            cin>>c1;
            if(c1==1)
               {  Beg_Node(head , a);      }
            else if(c1==2)
               {
                 cout<<"enter the node number after which the new data is to be entered:";
                 cin>>b;
                 Mid_node(head->next , a , b );
               }
            else
               {  End_node(head ,a );    }


           }
    /*case 2:{
            break;
           }
    case 3:{
            break;
           }
    case 4:{
            break;
           }
    case 5:{
              }
            break;
           }
    case 6:{
            break;
           }            */
    default:{cout<<"INVALID CHOICE !!!";
            break;
           }

    }

    cout<<"Do you want to perform more operations ?\n ('y' or 'n')";
    cin>>ans;

  }while(ans=='y'|| ans=='Y');

 return 0;

 }




