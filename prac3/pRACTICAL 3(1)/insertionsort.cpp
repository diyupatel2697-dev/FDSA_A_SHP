#include<iostream>
using namespace std;

int main()
{
    int A[]={8,5,1,3,7} ;
 int temp=0;
 int index;
 
 for(int j=0;j<5-1;j++)
    {
        for(int i=j+1;i<5;i++)
        {
            if(A[j]>A[i])
            {
            index =i;
            temp =A[i];
            for (int  k=index-1;k>=j;k--)
            {
                A[k+1]=A[k];
            }
            A[j]=temp;
            }

        }
    }
    cout<<"Insertion :"<<endl;
    for(int k=0;k<5;k++)
    {
        cout<<"A["<<k<<"] = "<<A[k]<<endl;
    }
}