/*
1. Write a C program to check whether a given number is even or odd.
2. Write a C program to calculate factorial of a number.
3. Write a C program to swap values of two int variables.
4. Write a C function to calculate LCM of two numbers (TSRS)
5. Write a C function to check whether a given number is a Prime number or not. (TSRS)
*/

#include<iostream>
using namespace std ;
int check(int n){
     if(n%2==0)
     cout << "even number" << endl; 
     else
     cout << "odd number" << endl; 

}
int factorial(int n){
      if(n==1 || n==0)
      return 1;
      else
      return n*factorial(n-1);
}
void swap(int *p , int *q){
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
 void lcm(int a , int b, int i){
    if(a>=b){
        if((a*i)%b==0)
        cout << "LCM IS = " << a*i << endl ;
        else 
        lcm(a,b,i+1);
    }
    else{
        if((b*i)%a==0)
        cout << "LCM IS = " << b*i << endl;
        else
        lcm(a,b,i+1);

return;
    }
 }
 void prime(int n , int m){
        if(m>n/2){
        cout << "number is prime";
        return;
        }
        if(n%m!=0)
        prime(n,m+1);
        else{
        cout << "number is not prime";
        return;
        }
        
        
 }
int main(){
    int a,k,b;
    cout << "enter a number =  "; 
    cin >>a; 
     cout << "enter another number =  "; 
    cin >>b; 
    check(a);
    k=factorial(a);
    cout << "factorial = " << k << endl;
    swap(&a,&b);
    cout << a << "  " << b << endl;
    lcm(a,b,1);
    prime(a,2);
    return 0;
}