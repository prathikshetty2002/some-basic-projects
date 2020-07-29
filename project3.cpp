#include<iostream>
using namespace std;

int main()
{
    int a[20],i,n,find;
    int key=0;
    cout<<"enter number of elements:"<<endl;
    cin>>n;
    cout<<"enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<"enter number to be searched:"<<endl;
   cin>>find;
   for(i=0;i<n;i++)
   {
       if(a[i]==find)
       {
         cout<<"the number found at\t"<<i+1<<" position"<<endl;
         break;
       }

      else 
      {
          cout<<"not found";
      }
   }
  
   while(i<n)
   {
       if(a[i]==find)
       {
           key++;
       }
       i++;
   }
     cout<<"number of occurancies:"<<key<<endl;

}