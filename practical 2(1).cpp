#include<iostream>
#include<string>
using namespace std;

int Guard(string VEHICLENO[],string VN,int index,int size)
{
    if(index == size)
    return 0;
    
    if(VEHICLENO[index] == VN)
    {
      cout<<"FOUND!"<<endl;
      return 1;
    }
    
     return Guard(VEHICLENO ,VN, index+1, size);
    
   

}

int main()
{
int no;
string vn;
int found=0;

cout<<"Enter how many Vehicle :"<<endl;
cin>>no;
cin.ignore();
string Vehicleno[];

cout<<"Enter Vehicle no's:"<<endl;

for(int i=0;i<no;i++)
{
     
    cout<<i+1<<".";
   getline(cin,Vehicleno[i]);
  
}
 
cout<<"Enter Vehicle no you want to find:"<<endl;
getline(cin,vn);

cout<<"ITERATIVE:";
for(int i=0;i<no;i++)
{
    if(Vehicleno[i]==vn)
    {found =1;
      cout<<"FOUND!"<<endl;
      break;
      
    }

}
if(found==0 )
{
    cout<<"NOT FOUND!"<<endl;
}

cout<<"RECURSIVE:";

int s=Guard(Vehicleno,vn,0,no);


if(s==0)
{
    cout<<"NOT FOUND!"<<endl;
}
}

