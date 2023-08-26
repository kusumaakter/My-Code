#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(int r,char s,int c,char * n)
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name,n);
        }


};
int main()
{
    Student rahim(23,7,'a',"ramih ullah")
    cout<<rahim.roll<endl;

}
