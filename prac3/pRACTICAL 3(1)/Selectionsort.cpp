#include<iostream>
using namespace std;

int main()
{

    int A[]={8,5,1,3,7} ;
 int temp=0;
 int index,i,j,k,a;
 int MIN=0;

    cout<<"Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }

        
        for(j=0;j<5-1;j++)
        {
            MIN=A[j];
            for(i=j+1;i<5;i++)
            {
                if(A[i]<MIN)
                {
                    MIN = A[i];
                    index = i;
                }
            }

         
            for(a=index;a>j;a--)
            {
            A[a]=A[a-1];
            }
            A[j]=MIN;

        }

    cout<<"Selection :"<<endl;
    for(int k=0;k<5;k++)
    {
        cout<<"A["<<k<<"] = "<<A[k]<<endl;
    }

}