#include<iostream>
using namespace std;
int main()
{
    short int s[10][15];
    int n,row,col;
    cout<<"PVR Movie ticket Booking"<<endl;
    cout<<"Enter the number of tickets to book";
    cin>>n;
    if(n>150)
    {
        cout<<"sorry! only 150 seats are available"<<endl;
        return 0;
    }
    for(int i=0;i<n;i=i+1)
    {
        cout<<"enter row number(1-10)";
        cin>>row;
        cout<<"enter column number(1-15)";
        cin>>col;
        if(row<1||row>10||col<1||col>15)
        {
            cout<<"Invalid seat number!"<<endl;
            i=i-1;
        }
        else if(s[row-1][col-1])
        {
            cout<<"Seat already booked! choose another seat"<<endl;
            i=i-1;
        }
        else
        {
        s[row-1][col-1];
        cout<<"Seat booked successfully!"<<endl;
        }
    }
    cout<<"seating arrangement"<<endl;
    for(int i=0;i<10;i=i+1)
    {
        cout<<"row"<<i+1<<":";
        for(int j=0;j<15;j=j+15)
        {
            if(s[i][j])
            cout<<"O";
            else
                cout<<"X";
        }
        cout<<endl;
    }
    cout<<"O=available X=booked"<<endl;
    return 0;
}
