#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int result1(string user, string comp)
{   
    if(user==comp)
    {
        return 0;
    }
    
   if(user=="stone" && comp=="paper")
   {
       return -1;
   }
   
   else if(user=="stone" && comp=="scissors"){
      return 1;
   }
   
    if(user=="paper" && comp=="scissors"){
      return -1;
   }
   
    else if(user=="paper" && comp=="stone"){
      return 1;
   }
    if(user=="scissors" && comp=="stone"){
      return -1;
   }
    else if(user=="scissors" && comp=="paper"){
      return 1;
   }

 


   return result1(user, comp);
}


int main()
{
    string comp,user;

    int num;
    for(int i=0;i<11;i++)
{
    srand(time(0));
    num=rand()%100+1;
    if(num<33){
        comp="stone";
  }
  else if(num<66&&num>33)
  {
      comp="paper";

  }
  else{
      comp="scissors";
  }
  
cout<<"\n\nstone paper scissors game\n"<<endl;

cout<<"Enter your move: "<<endl;
getline(cin,user);


  int result=result1(user, comp);

   if(result==1)
   {
        cout<<"\ncomputer entered "<<comp<<"\n you entered "<<user<<endl;

       cout<<"\nyou won the match!\n -------Well Done--------"<<endl;
      
   }
  else if(result==-1)
  {     
       cout<<"\ncomputer entered "<<comp<<"\n you entered "<<user<<endl;

      cout<<"\ncomputer won the match!\n -------Better luck next time-------"<<endl;
    
       
  }
  else
  {    
       cout<<"\ncomputer entered "<<comp<<"\n you entered "<<user<<endl;

      cout<<"\nThe match is Drawn!\n ----------Try Again to Win---------"<<endl;
        
       
  }
  
  
  
  

}
  


  
return 0;

}
