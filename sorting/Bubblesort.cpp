#include<iostream>
using namespace std;

int main()
{
int A[]={8,5,1,3,7} ;
 int temp=0;
 int index;

    cout<<"Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }

    for(int j=0;j<5-1;j++)
    {
            for(int i=0;i<5-1;i++)
            {
            if(A[i]>A[i+1])
            {
               temp=A[i];
                A[i]=A[i+1];
                A[i+1] =temp;
            }
            }
    }

    cout<<"Sorted BUBBLE:"<<endl;
    for(int k=0;k<5;k++)
    {
        cout<<"A["<<k<<"] = "<<A[k]<<endl;
    }
}
