# include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//starting of main function
int main () {
     srand(time(0));    
     int daysUntilExparation = rand() % 12;
     if(daysUntilExparation<=0){
        cout<<"Your subscription has expired"; 
     } 
     else if(daysUntilExparation==1){
        cout<< "Your subscription expires within a day!"<<endl;
        cout<< "Renew now and save 20%!"; 
     }
     else if(daysUntilExparation<=5){
        cout<<"Your subscription expires in value of daysUntilExpirationdays"<<endl;
        cout<< "Renew now and save 10%! ";
     }
      else if(daysUntilExparation<=10){
        cout<<"Your subscription will expire soon. Renew now! ";
      }
      else {
        cout<<"You have an active subscription. ";
      }
      return 0;
     }

