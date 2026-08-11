#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
        cout<<"****************************************************"<<endl;
        cout<<"STUDENT RECORD MANAGMENT SYSTEM"<<endl;
        cout<<"****************************************************"<<endl;
        cout<<"Software version"<<setw(10)<<":"<<"1.0"<<endl;
        cout<<"Enrollment Number"<<setw(9)<<":"<<"26TCEYID"<<endl;
        cout<<"Student Name"<<setw(14)<<":"<<"Jay rana"<<endl;
        cout<<"Branch"<<setw(20)<<":"<<"CE"<<endl;
        cout<<"Semester"<<setw(18)<<":"<<"1st"<<endl;
        cout<<"Mobile number"<<setw(13)<<":"<<"9999999999"<<endl;

int m1,m2,m3;
float percentage;
        cout<<"****************************************************"<<endl;
        cout<<"Academic information"<<endl;
        cout<<"****************************************************"<<endl;
        cout<<"enter the marks of three subjects:";
        cin>>m1>>m2>>m3;
    if(m1<0 || m1>100 || m2<0 || m2>100 || m3<0 ||m3>100)
    {
        cout<<"error:invalid input";
    }
    else
    {
        percentage=(m1+m2+m3)/3.0;
        if(percentage>90)
        {
            cout<<"Class:Distinction";
        }
        else if (percentage>=75)
        {
            cout<<"Class:first";
        }
        else if(percentage>=60)
        {
             cout<<"Class:second";
        }
        else if(percentage>=45)
        {
            cout<<"Class:pass";
        }
        else
        {
            cout<<"Class:fail";
        }


      }
            return 0;
}


