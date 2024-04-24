# include<iostream>
using namespace std;
int main () {
    int number;
    while (true){
        cout<<"Enter an integer value between 5 and 10:";
        cin>> number;
        if(number<= 5 && number<=10){
            cout<<"sorry, you entered an invalid number, please enter again :"<<endl;
            cin>>number;
        }
        //else if (number >=5 && number <=8){
           // break;
            //cout<<"you input value has been accepted";
       // }
        //else{
            cout<<"you input value has been accepted";
       // }
    return 0;
    }
}