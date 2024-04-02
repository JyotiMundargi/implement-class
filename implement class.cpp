#include<iostream>
using namespace std;
class student
{
    int mynum;
    string mystring;
     
    student(int num,string str) 
    {
        mynum=num;
        mystring=str;
    }
    void print()
    {
        cout<<"My Number is:" <<mynum <<endl;
        cout<<"My string is:" <<mystring <<endl;
    }
};
int main()
{
    student myObject(79,"Jyoti Mundargi");
    myObj.print();
    
    return 0;

}