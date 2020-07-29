#include<iostream>
using namespace std;

int main()
{
    int *p,large,n,i;
   p=new int a[20];
   cout<<"enter number of elements:"<<endl;
   cin>>n;
   cout<<"enter the numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    large=largest(*p,n);
    cout<<"largest number is:"<<large;
    

}
int largest(int *p,int n)
{
     int i,large;
     large=a[0];
     for(i=0;i<n;i++)
     {
         if(large<a[i])
         {
             large=a[i];
         }
     }
     return large;
}