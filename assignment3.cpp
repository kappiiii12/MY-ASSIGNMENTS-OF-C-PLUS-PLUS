/*
1. Write a C++ program to calculate an average of 3 numbers.
2. Write a C++ program to calculate the square of a number
3. Write a C++ program to swap values of two int variables without using third variable
4. Write a C++ program to find the maximum of two numbers.
5. Write a C++ program to add all the numbers of an array of size 10.
*/
#include<iostream>
using namespace std;
void average(){
    int a,b,c;
    cout << "enter 3 numbers = " ;
    cin >> a >> b >>c  ;
    cout << "average is " << (a+b+c)/3 << endl;
    }
void square(){
   int a;
   cout << "enter a number = " ;
   cin >> a ;
   cout << "square is " << a*a << endl;
    }
void swap(){
     int a,b;
     cout << "enter 2 numbers = ";
     cin >> a >> b;
     a=a+b;
     b=a-b;
     a=a-b;
     cout << "swapped values are" << a << " " << b << endl ;
    }
void add(){
    int a[10],i,sum=0;
    cout << "enter the values in array = ";
    for(i=0;i<10;i++){
    cin >> a[i];
    sum+=a[i];
    }
cout << "sum is " << sum << endl ;
    

}
int main(){
    average();
    square();
    swap();
    add();
    return 0;
}