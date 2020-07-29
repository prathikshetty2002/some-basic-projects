 #include<iostream>
 using namespace std;

 int main()
 {
     int *p,i,n;
     
     p=new int[20];
     cout<<"enter the number of elements :";
     cin>>n;
     cout<<"enter:"<<endl;
     for(i=0;i<n;i++)
     {
         cin>>*(p+i);
     }
    void reverse(int *p,int n);
     reverse(p,n);
     
     delete p;//release memory allocation 
     return 0;
 }

 void reverse(int *p,int n)
 {
     int i,*s;
     s=new int[20];

     for(i=0;i<n;i++)
     {
       *(s+n-i-1)=*(p+i);
     }
     cout<<"reverse of given array:"<<endl;
     for(i=0;i<n;i++)
     {
         cout<<*(s+i)<<endl;
     }
     delete s;//space in heap released
     //update:when we use dynamic allocation 
     //the memory is stored in stack
     //while using manual(New,delete) allocation
     //the memory is stored in heap
 }
