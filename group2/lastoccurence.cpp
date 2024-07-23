#include <iostream>
using namespace std;
int main(){

    int total,numfind,empty;
    empty=0;
    cout<<"Enter the total values: "<<endl;
    cin>>total;
        cout<<"Enter the number to find: "<<endl;
    cin>>numfind;
    int array[total];
    for(int i=0;i<=total;i++){
cout<<"Enter a number:"<<endl;
cin>>array[i];
if(numfind==array[i]){
    empty=i;
}


    }
    cout<<"The value occurs:"<<empty<<"times";


}
