#include<iostream>
#include<conio.h>
using namespace std;                             //global namespace std 

template <class T>                               //template syntax

T add(T num1,T num2)                             // c++ function template 
{                                                //this function accepts 2 parameters
        T ans;                                   //and returns addition of that 2 parameters
        ans = num1 + num2;
        return ans;
}

int main()
{
          int i1 = 10,i2 = 20;                      //two integer numbers
          cout << "Addition of two Integers   :";
          cout << add(i1,i2) <<endl;                //template instantiation
          
          float f1 = 10.1,f2 = 20.2;                //two float numbers
          cout << "Addition of two Floats     :";
          cout << add(f1,f2)<<endl;                 //template instantiation 
               
          double a = 15.4,b = 4.6;                  //two double numbers
          cout<<"Addition of two Double     :";
          cout << add(a,b) <<endl;                  //template instantiation
          
          char  x= 'p', y = 'q';                    //two double numbers
          cout<<"Addition of two Chararcter :";
          cout << add(x,y) <<endl;                  //template instantiation
          
          getch();
          return 0;
}