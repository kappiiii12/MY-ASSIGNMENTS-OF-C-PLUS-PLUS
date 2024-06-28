/*
1. Write a C++ program to print Hello MySirG on the screen.
2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.
3. Write a C++ program to calculate the sum of two numbers.
4. Write a C++ program to calculate the area of a circle
5. Write a C++ program to calculate the volume of a cuboid.
*/
#include<iostream>
using namespace std;
void print(){
    cout << "Mysirg" << endl;
}
void newline(){
    cout << "hello" << endl << "MySirg" << endl;
}
void add(){
    int a,b;
    cout << "enter 2 numbers = ";
    cin >> a >> b ;
    cout << "sum is " << a+b << endl;
}
void areaCircle(){
    int r;
    cout << "enter radius = ";
    cin >> r ;
    cout << "area of circle is " << 3.14*r << endl;
}
void volume(){
   int a,b,c;
   cout << "enter length width height = ";
   cin >> a >> b >>c ;
   cout <<  "volume is " << a*b*c ;
   }
int main(){
    print();
    newline();
    add();
    areaCircle();
    volume();
    return 0;
}