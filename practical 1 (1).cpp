#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,h;

    cout<<"Enter number of iteams:"<<endl;
    cin>>n;

    cin.ignore();

 string iteams[n];
string temp;
 for(int i=0;i<n;i++)
{
    cout<<"Enter iteam "<<i+1<<":";
    getline(cin,iteams[i]);

}
//print 
cout<<"Iteams Name:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<iteams[i]<<endl;
}

cin.ignore();
cout<<"Enter no. of hours to rotate iteams:"<<endl;
cin>>h;

h=h%n;

for(int i=0;i<h;i++)
{

temp=iteams[0];

for(int i=0;i<n-1;i++)
{
    iteams[i]=iteams[i+1];
}

iteams[n-1]=temp;

}
cout<<"Array after rotation " <<h<< " time:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<iteams[i]<<endl;
}

}

