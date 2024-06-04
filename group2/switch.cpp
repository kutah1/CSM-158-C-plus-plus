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
    case 'a':
        cout<<"Your grade is within the range of 70-100\n You have qualified to be interviewed";
            break;
    case 'B':
    case 'b':
            cout<<"Your grade is within the range of 60-69\n You have qualified to be interviewed";
            break;
    case 'C':
    case 'c':

            cout<<"Your grade is within the range of 50-59\n You have qualified to be interviewed";
            break;
    case 'D':
    case 'd':
        cout <<"Your grade is within the range of 40-49\n You have qualified to be interviewed";

            break;
            case 'F':
            case 'f':
            cout<<"Your grade is within the range of 30-39\n You have not qualified to be";
            break;
        
        default:  
        cout<<"Invalid grade output";
            break;
        }
 }