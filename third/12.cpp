#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class areacalc
{
private:
public:void area(float r);
void area(int a,int b);
void area(float a,float b,float d);
};
void areacalc::area(float r)
{
cout << "\nArea of Circle=\n" << (3.14*r*r) << endl;
}
void areacalc::area(int a,int b)
{
cout <<"\nArea of Rectangle=\n"<<(a*b)<<endl;
}
void areacalc::area(float a,float b,float c)
{
float s,ar;
s=(a+b+c)/2;
ar= sqrt(s*(s-a)*(s-b)*(s-c));
cout <<"\nArea of Triangle=\n"<<ar << endl;
}
int main()
{
areacalc ac;
int r,a,b,c,d;
cout <<"\nChoose your option";
cout <<"\n1-rectangle\n2-circle\n3-triangle";
cout <<"\nEnter your choice :";
cin >>c;
switch(c)
{
case 1:cout<<"\nEnter breadth and length:";
cin >> a >>b;
ac.area(a,b);
break;
case 2:cout <<"\nEnter the radious of circle:";
cin >> r;
ac.area(r);
break;
case 3:cout<<"\nEnter  the three side of triangle:";
cin >> a >> b >>d;
ac.area(a,b,d);
break;
default:cout<<"invalid choice";
}
getchar();
return 0;
}
