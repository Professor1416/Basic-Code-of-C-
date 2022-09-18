//Logical Operator

#include <iostream>
using namespace std;

int main()
{
int a = 50;
int b = 30; //int use for integer value.

//Logical AND
//we use also  Logical NOT
if (!((a > b) && (a != b))) // !(a=50 > b=30) is False && (a=50 != b=30) is True; Therefore this statement is False.
                           // when both statement are True then result will be True.
{
cout<<"First statement is true"<<endl; //"cout" use for print line. 
}
else //when if condition false then else condition executed
{
cout<<"First statement is false"<<endl; //"endl" use for linebreak.
}

// Logical OR
if ((a < b) || (a != b)) // (a=50 < b=30) is False || (a=50 != b=30) is True; therefore this statement is True.
                        //if one(or both) statement is True then result will be True, Otherwise it returns False.
                       // '!'not is True statement consider False and False statement consider to True.
{
cout<<" Second statement is true"<<endl;
}
else
{
cout<<"Second statement is false"<<endl;
}

return 0;
}

//Output
/*
//Logical AND
First statement is false

//Logical OR
Second statement is true
*/




                                                    //Prashant Dasnur