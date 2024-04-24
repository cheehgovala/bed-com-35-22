#include<iostream>
using namespace std;
double calculateTriangleArea(double base, double height) {
    return 0.5*base*height;
}
double calculateRectangleArea(double length, double width){
    return length*width;
}
double calculateSquareArea(double side){
    return side *side;
}
int main ( ) {
    char choice;
    do {
        cout<<"select a shape to calculate the area:\n";
        cout<<"1. Triangle\n2. Rectangle\n3. Square\n";
        cout<<"Enter your choice(1,2,or3):";
        cin>> choice;
        if (choice != '1'&& choice !='2' && choice !='3'){
            cout <<"invalid input. please enter a valid choice.\n";
            continue;
        }
        double area;
        double base,heigth,length,width,side;
        switch(choice){
            case '1':
            cout<<"enter base and height of Triangle:";
            cin>>base>>heigth;
            area = calculateTriangleArea(base,heigth);
            cout <<"The area of the triangle is:"<<area<<endl;
            break;
            case '2':
            cout<<"enter length and widith of rectangle:";
            cin>>length>>width;
            area =calculateRectangleArea (length, width);
            cout<<"The area of the Rectangle is:"<<area<<endl;
            break;
            case '3':
            cout<<"enter the side length of the Square :";
            cin>>side;
            area =calculateSquareArea (side);
            cout<<"The area of the triangle is:"<<area<<endl;
            break;
        }
        cout <<"do you want to calculatenthe area of another shape? (y/n):";
        cin>>choice;
    }while(choice =='y'|| choice =='y');
    return 0;
}