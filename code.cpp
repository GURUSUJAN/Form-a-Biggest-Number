//
//  2.cpp
//  Naiju
//
//  Created by GURU SUJAN on 11/01/23.
//

#include "iostream"
using namespace::std;
int main()
{
    int n,i,temp=0,count=0;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int ar[n],array[n];
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
    cout<<"Array after correction: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i];
    }
    cout<<endl;
}
