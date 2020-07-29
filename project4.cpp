#include<iostream>
using namespace std;

int main()
{
int i,n;
int a[20];
cout<<"enter number of elements:"<<endl;
cin>>n;
cout<<"enter :"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
int j;
cout<<"unsorted elements:"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
for(i=0;i<n;i++)
{
for(j=0;j<=n-i-1;j++)
{
   if(a[j]>a[j+1])
   {
       int t;
       t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
   }
}
}
cout<<"sorted elements:"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
}