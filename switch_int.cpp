//Switch Integers:- In Switch Integer we use Numbers(integers)

#include<iostream>
using namespace std;
int main()
{
int _int = '5'; //which case you want to execute 'Enter' case value.
int a = 30; //variable def
int b = 20; 
int c; 
switch(_int) 
{
	case '1': //the case label must end with colon(:)
	{
		//Addition
		c = a + b;
		cout<<"the value of a+b is:"<<c<<endl; //"cout" use for print line.
		break; //It's necessary to use break after each block.
	}

	case '2': //case label must be unique.
        {
        	//Subtract
                c = a - b;
                cout<<"the value of a-b is:"<<c<<endl; //"endl" use for linebreak. 
        	break; //if you don't use it, then all cases executed.
	}

	case '3': //integer write in 'single quotes'.
        {
        	//Division
                c = a / b;
                cout<<"the value of a/b is:"<<c<<endl;
                break;
        }

	case '4':
        {
        	//Multiply
                c = a * b;
                cout<<"the value of a*b is:"<<c<<endl;
        	break;
	}

	case '5':
        {
        	//Modulus
                c = a % b;
                cout<<"the value of a%b is:"<<c<<endl;
        	break;
	}

	default: //If none of the case label values matches to the value of the expression, then default part statement will be executed.
	{
	cout<<"Enter the value valid"<<endl;
	}





}
return 0;
}



//Output
/*
a = 30; b = 20;

case 1: c = a + b;
the value of a+b is:50

case 2: c = a - b;
the value of a-b is:10

case 3: c = a / b;
the value of a/b is:1

case 4: c = a * b;
the value of a*b is:600

case 5: c = a % b;
the value of a%b is:10
*/





                              //Prashant Dasnur