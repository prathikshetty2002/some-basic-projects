#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int result1(string user, string comp)//program logic  about winning
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

 


  return 0;
}


int main()
{
    string comp,user;

    int num;
    for(int i=0;i<11;i++)
{
    srand(time(0));//generating random numbers
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
  
cout<<"\nstone paper scissors game\n"<<endl;

cout<<"Enter your move: "<<endl;
getline(cin,user);
 try//try block
 {
     if(user=="stone" || user=="paper" || user=="scissors")
     {
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
  
  cout<<"thanks for playing the game!"<<endl;
  
  

}
  
         
     
     
 else{
 
   throw "Exception-invalid input,enter stone,paper or scissors!";//exception handling
  
 }
 }
catch(const char* error)//catch block
 {
     cerr << error << '\n';
     
 }
 
}
return 0;
}

