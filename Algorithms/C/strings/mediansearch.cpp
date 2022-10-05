
#include<iostream>
using namespace std;
int median(int arr[],int l,int h,int k)
{
    int i=h-l+1;
    int index=rand()%i;
    int s1[h];
    int s2[h];
    int s3[h];
    int j=0,m=0,n=0;
    for(int i=0;i<=h;i++)
    {
        if(arr[i]==arr[index])
        {
            s2[j]=arr[i];
             j++;
        }
        else if(arr[i]<arr[index])
        {
            s1[m]=arr[i];
            m++;
        }
        else{
            s3[n]=arr[i];
            n++;
        }
    }
    if(m>=k)
    {
        median(s1,0,m-1,k);
    }
    else if(j+m>=k)
    {
        return arr[index];
    }
    else{
        median(s3,0,n-1,k-j-m);
    }
}
int main()
{
    int n ;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a;
    cout<<"Enter the element you want to search for : ";
    cin>>a;
    cout<<median(a,0,n-1,3);
}