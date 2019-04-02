#include <iostream>
#include <string.h>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
    char branch[2];
}s1,s2,s3;

int main()
{
    int flag;
    cout << "Enter Student 1 information," << endl;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter branch: ";
    cin >> s1.branch;
    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "Enter Student 2 information," << endl;
    cout << "Enter name: ";
    cin >> s2.name;
    cout << "Enter roll number: ";
    cin >> s2.roll;
    cout << "Enter branch: ";
    cin >> s2.branch;
    cout << "Enter marks: ";
    cin >> s2.marks;

    cout << "Enter Student 3 information," << endl;
    cout << "Enter name: ";
    cin >> s3.name;
    cout << "Enter roll number: ";
    cin >> s3.roll;
    cout << "Enter branch: ";
    cin >> s3.branch;
    cout << "Enter marks: ";
    cin >> s3.marks;

    cout << "Roll no of student with branch cs-" << endl;
    if(strcmp(s1.branch,"cs")==0)
    cout << s1.name << endl;
    if(strcmp(s2.branch, "cs")==0)
    cout << s2.name << endl;
    if(strcmp(s3.branch, "cs")==0)
    cout << s3.name << endl;
    cout << "Roll no of student with highest marks-" << endl;
    if(s1.marks>s2.marks)
    {
    if(s2.marks>s3.marks)
    flag=0;
    else if(s1.marks>s3.marks)
    flag=0;
    else
    flag=2;
    }
    else if(s2.marks>s3.marks)
    flag=1;
    else
    flag=2;
    if(flag==0)
    cout << s1.roll << endl;
    else if(flag==1)
    cout << s2.roll;
    else
    cout << s3.roll;
    return 0;
}
