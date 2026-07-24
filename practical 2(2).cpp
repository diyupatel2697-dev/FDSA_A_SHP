#include<iostream>
#include<vector>
using namespace std;

int Recursive(vector<int>&Book,int k,int MID,int END,int START)
{  

    if(Book[MID]==k)
    {
        return 1;
    }

    if(Book[MID]>k)
    {
        END =MID -1;
        return Recursive(Book,k,MID,END,START);

    }

    if(Book[MID]<k)
    {
        START =MID+1;
        return Recursive(Book,k,MID,END,START);
    }

}

int main()
{ 
    int no,key;
    int found=0;
   
    
    cout<<"EnterNumber of Book :";
    cin>>no;

    vector<int> Book(no);
    
    cout<<"Enter you Book Id:";
    for(int i=0 ;i<no ;i++)
    {
        cin.ignore();
        cin>>Book[i];
    }
     
    cout<<"Enter your searching Book id:";
    cin>>key;

    int start =0;
    int end=no-1; 
    int mid = (start+end)/2;
    


    cout<<"ITERATIVE:"<<endl;
    while(start<=end)
    {
        if(Book[mid]==key)
        {
           cout<<"FOUND";
           found= 1;
           break;
        }
        else if(Book[mid]<key)
        {   
            start = mid+1;
            mid = (start+end)/2;
            break;
        }
        else
        {
            end = mid-1;
            mid = (start+end)/2;
            break;
        }
    }

    if(found==0)
    {
        cout<<"NOT FOUND"<<endl;
    }

    cout<<"RECURSIVE"<<endl;

    int R=Recursive(Book,key,mid ,end,start);

    if(R==1)
    cout<<"FOUND";

    if(R==0)
    cout<<"NOT FOUND";

}