//Ways of declaring an array datatype arrayname[]={1,2,3,4}
//datatype arrayname[n];
// datatype[n][m];Arrays inside array. At every point an element is, there is another array
// n and m are the sizes of the arrays
// datatype arrayname[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}}
// One dimensional array with multiple columns
//to get 5
//the first row is indicated by 0 and
//arrayname[0][4] prints 5
#include <iostream>
using namespace std;
int main(){
/*int arrayname[5]={1,2,3,4,5};
cout<<arrayname[3]<<endl;
*/
int arrayName[5][5]={
    {10,20,30,40,50},
    {11,21,31,41,51},
    {12,22,32,42,52},
    {13,23,33,43,53},
    {14,2,34,44,54}};
cout<<arrayName[0][2]<<endl;
for(int i=0;i<5;i++){
    cout<<0<<i<<endl;

    for(int j=0;j<5;j++){


    cout<<"Number:"<<arrayName[i][j]<<endl;
} }
    return 0;
}
