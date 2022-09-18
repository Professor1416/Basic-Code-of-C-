//Function Arthmatic Operation

#include <iostream>
using namespace std;

//Function Declaring
int add(int a , int b);//Function Prototype is declared before main()
int sub(int a, int b);
int _div(int a, int b);//'int' is return type of the Function
int multi(int a, int b);
int modulos(int a, int b);

int main()
{
	int rs1,rs2,rs3,rs4,rs5; //Taking New Variable For Storing Value of 
	rs1 = add(30,20); //Calling the Function and Storing.
	cout<<"the addition of a+b is:"<<rs1<<endl;

 	rs2 = sub(30,20);
        cout<<"the subtraction of a-b is:"<<rs2<<endl; //"cout" use for print line.

 	rs3 = _div(30,20);
        cout<<"the division of a/b is:"<<rs3<<endl; //"endl" use for linebreak.

 	rs4 = multi(30,20);
        cout<<"the multiplication of a*b is:"<<rs4<<endl; 

	rs5 = modulos(30,20);
        cout<<"the modulos of a%b is:"<<rs5<<endl;
	return 0; //Any code after 'return' inside the function is not executed.
}

//Function Definition
int add(int a, int b) //it's take same as function declartion 
{
	int  c; //take new variable for store a result value.
	c = a + b; 
	return c; // return c is returns the sum of the two parameters.
}

int sub(int a, int b)
{
        int  c;
        c = a - b;
        return c; //the return statement can be used to return a value from a function.
}

int _div(int a, int b)
{
        int  c;
        c = a / b;
        return c;
}

int multi(int a, int b)
{
        int  c;
        c = a * b;
        return c;
}

int modulos(int a, int b)
{
        int  c;
        c = a % b;
        return c;
}


//Output
/*
the addition of a+b is:50
the subtraction of a-b is:10
the division of a/b is:1
the multiplication of a*b is:600
the modulos of a%b is:10
*/


                                             //Prashant Dasnur