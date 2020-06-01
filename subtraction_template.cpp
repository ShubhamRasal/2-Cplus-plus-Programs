#include<iostream>
#include<conio.h>
using namespace std;                            //global namespace std 

template <class T>                              //template syntax

T sub(T num1,T num2)                           // c++ function template 
{
        T ans;                                 //this function accepts 2 parameters
        ans = num1 - num2;                     //and returns subtraction of that 2 parameters
        return ans;
}

int main()
{
          int i1 = 50,i2 = 20;                      //two integer numbers
          cout << "Subtraction of two Integers :";
          cout << sub(i1,i2) <<endl;               //template instantiation
          
          float f1 = 20.1f,f2 = 15.2f;             //two float numbers
          cout << "Subtraction of two Floats   :";
          cout << sub(f1,f2) <<endl;               //template instantiation 
               
          double a =5.5,b = 4.7;                   //two double numbers
          cout<<"Subtraction of two Double   :";
          cout << sub(a,b) <<endl;
          
          getch();
          return 0;
}