#include<bits/stdc++.h>
using namespace std;
int main()
{
   srand(static_cast<unsigned int>(time(0)));    //random function time(0) means at that time
 // int number =1+rand()%100;                     //static cast is for type casting 
 // cout<<number;
 int min=0;
 int max=50;
 int num=min+rand()%(max-min);

 int lives=5;
 cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
 cout<<"CHOOSE A NUMBER BETWEEN 0 AND 50"<<endl;
 while(lives--)                 //inside while loop decrement we have used as it thinks if it is non zero num then it will come out of the loop
 {
     int choice;
     cout<<"Enter your choice of number"<<endl;
     cin>>choice;
 if(choice==num)
 {
     cout<<"CONGRATULATIONS!!YOU WON THE GAME"<<endl;
     exit(0);
 }
 else if(choice<num)
 {
      cout<<"YOUR ENTRY IS LOW! GUESS HIGH "<<endl;
    
 }
 else
 {
     cout<<"YOUR GUESS IS HIGH! GUESS LOW"<<endl;
   
 }
if(lives==0)
{
   cout<<" OHH OHH!!! YOU LOST"<<endl;
    break;
 }
 else{
     cout<<"you have "<<lives<<" left"<<endl;
 }



 }
    return 0;
}