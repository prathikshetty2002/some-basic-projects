#include<iostream>
using namespace std;

int main()
{
    int *p,large,n,i;
   p=new int [20];//new operator initialized
   cout<<"enter number of elements:"<<endl;
   cin>>n;
   cout<<"enter the numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    int largest(int *P,int n);
    large=largest( p,n);
    cout<<"largest number is:"<<large;
    //the pointer usage is terminated its a good programmer practice
      delete p;//pointer array deleted hence saving memory
}
int largest(int *p,int n)
{
     int i,large;
     large=*(p+0);
     for(i=0;i<n;i++)
     {
         if(large<*(p+i))
         {
             large=*(p+i);
         }
     }
     return large;
}