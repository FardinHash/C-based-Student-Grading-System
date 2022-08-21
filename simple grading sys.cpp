
#include<iostream>
using namespace std;

int main()
{
    //declaring variables
int sub1, sub2, sub3, sub4, sub5, total=0;

float percent;
 cout<<"Enter 5 Subject's  marks :\n ";

    //input from the user
 cin>>sub1>>sub2>>sub3>>sub4>>sub5;

   //total marks
total=sub1+sub2+sub3+sub4+sub5;
cout<<"Sum of 5 Subjects is- ="<<total;

    //calculate the percentage
percent=total/5;

    //calculate the grade
if(percent>90)
{
cout<<"\n A";
}
else if(percent<90 && percent>=80)
{
cout<<"\n B";
}
else if(percent<80 && percent>=70)
{
cout<<"\n C";
}
else if(percent<70 && percent\>=60)
{
cout<<"\n D";
}
else
{
cout<<"\n Retake!";
}
    
return 0;
}
