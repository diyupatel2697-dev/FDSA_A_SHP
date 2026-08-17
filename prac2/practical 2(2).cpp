#include<iostream>
#include<vector>
using namespace std;

int Recursive(vector<int>&Book,int k,int MID,int END,int START)
{  
    //if key is not in array - return 0
    if(START>END)
    {
    if(Book[MID]!=k)
    {
        return 0;
    }
    }
    

    while(START<=END)
    {
    if(Book[MID]==k)
    {
        int index =MID;
        cout<<"At index:"<<index<<"Found element:"<<Book[index]<<endl;
        return 1;
    }

    //left side
    if(Book[MID]>k)
    {
        END =MID -1;
    }

    //right side
    if(Book[MID]<k)
    {
        START =MID+1;
    }
    
    }
    MID=(START+END)/2;
    return Recursive(Book,k,MID,END,START);

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
        //cin.ignore();
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
        //Book found
        if(Book[mid]==key)
        {
           cout<<"FOUND"<<endl;
           found= 1;
           int index =mid;
           cout<<"At index:"<<index<<"Found element:"<<Book[index]<<endl;
            break;
        }

        //right side
        else if(Book[mid]<key)
        {   
            start = mid+1;
            //update middle after chinging start
            mid = start+(end-start)/2;
            
        }

        //left side
        else
        {
            end = mid-1;
            mid = start+(end-start)/2;
            
        }
    }

    if(found==0)
    {
        cout<<"NOT FOUND"<<endl;
    }

    cout<<"RECURSIVE:"<<endl;
    //recursive call
    int R=Recursive(Book,key,mid ,end,start);

    if(R==1)
    cout<<"FOUND";

    if(R==0)
    cout<<"NOT FOUND";

}