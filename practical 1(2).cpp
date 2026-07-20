#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of book:"<<endl;
    cin>>n;

 int bookid[n]; // Array to store book IDs
 cout<<"Enter Book-ID you want to borrow:"<<endl;

 for(int i=0;i<n;i++)
 {
      cin>>bookid[i];

 }

 //Use unordered_map to count occurrences of each Book ID
unordered_map<int,int>duplicate;//unordered_map<key,value>(key=id, value=duplicate id)

    for(int i = 0; i < n; i++)
    {
        duplicate[bookid[i]]++;
        //If bookid[i] is new :starts at 0 then becomes 1
        //If already exists :increases count by 1
    }

    //Check which Book IDs are duplicates
   bool found=false;//No duplicate found yet.
    cout<<"Duplicate Book IDs: ";
    for(auto x:duplicate)
    {
         //x.first = Book ID, x.second = Count
        if(x.second>1)//that means the Book ID appeared more than once → it’s a duplicate.
        {
            cout<<x.first<<"(appears " << x.second << " times) "<<endl;
            found=true;
        }
    }

    //no duplicates found
    if(!found)
    {
        cout << "None";
    }
}

