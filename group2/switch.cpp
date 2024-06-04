#include <iostream>
using namespace std;
int main()
{



    char grade;
    cout<<"Enter your grade for CSM 158";
    cin>> grade;
    switch (grade)
        {
    case 'A':
        cout<<"Your grade is within the range of 70-100\n You have qualified to be interviewed";
            break;
    case 'B':
            cout<<"Your grade is within the range of 60-69\n You have qualified to be interviewed";
            break;
    case 'C':
            cout<<"Your grade is within the range of 50-59\n You have qualified to be interviewed";
            break;
    case 'D':
        cout <<"Your grade is within the range of 40-49\n You have qualified to be interviewed";

            break;
        
        default:
            break;
        }
 }