# include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//starting of main function
int main () {
     srand(time(0));    
     int daysUntilExparation = rand() % 12;
     switch (daysUntilExparation)
     {
     case 0:cout<<"Your subscription has expired";
        break;
        case 1:cout<< "Your subscription expires within a day!"<<endl;
        cout<< "Renew now and save 20%!"; 
        break;
     case 5: cout<<"Your subscription expires in value of daysUntilExpirationdays"<<endl;
        cout<< "Renew now and save 10%! ";
        break;
        case 10:cout<<"Your subscription will expire soon. Renew now! ";
        break;
     default:  cout<<"You have an active subscription. ";
        break;
     }
     return 0;
}