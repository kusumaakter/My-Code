#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;


};
int main()
    {
        student sami;
        sami.section='A';
        sami.roll=23;
        char nm[100]="sami"
        strcpy(sami.name,nm);
        cout<<sami.section;
    }
