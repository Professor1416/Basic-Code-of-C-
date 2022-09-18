//if-else-if Example:- Grade

#include<iostream>
using namespace std;

int main() //Main Function
{
	int sub1 = 81;
	int sub2 = 79;
	int sub3 = 87;
	int sub4 = 83;//int use for integer value.
	int sub5 = 85;
	int per;
	int per2;

	per = sub1 + sub2 + sub3 + sub4 + sub5;
	per2 = per / 5;
	cout<<"Persentage:"<<per2<<endl;

	if(per2 >= 90)
	{
	cout<<"Grade A"<<endl; //These statements would execute if the condition is true
	}

	else if(per2 >= 80)
	{
	cout<<"Grade B"<<endl; //'cout' use for print line 
	}

	else if(per2 >= 70)
        {
        cout<<"Grade C"<<endl; //"endl" use for linebreak. 
        }

	else if (per2 >= 60)
        {
        cout<<"Grade D"<<endl;
        }

	else if (per2 >= 40)
        {
        cout<<"Grade E"<<endl;
        }

	else
	{
	cout<<"Grade F"<<endl; //These statements would execute if all the conditions return false.
	}
return 0; //Return Statement
}


//Output
/*
Persentage:83
Grade B
*/


                                            //Prashant Dasnur