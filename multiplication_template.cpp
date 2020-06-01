#include<iostream>
#include<conio.h>
using namespace std;                            //global namespace std 

template <class T>                              //template syntax

T mult(T num1,T num2)                           // c++ function template 
{
        T ans;                                  //this function accepts 2 parameters
        ans = num1 * num2;                      //and returns multiplication of that 2 parameters
        return ans;
}

int main()
{
          int i1 = 5,i2 = 2;                                //two integer numbers
          cout << "Multiplication of two Integers :";
          cout << mult(i1,i2) <<endl;                       //template instantiation
          
          float f1 = 2.5f,f2 = 3.5f;                        //two float numbers
          cout << "Multiplication of two Floats   :";
          cout << mult(f1,f2) <<endl;                       //template instantiation 
               
          double a =5.5,b = 10.5;                           //two double numbers
          cout<<"Multiplication of two Double   :";
          cout << mult(a,b) <<endl;                         //template instantiation
            
          getch();
          return 0;
}