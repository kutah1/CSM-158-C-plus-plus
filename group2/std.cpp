/*#include <iostream>
using namespace std;
void names(string pet,string eagle){
cout<<"The pet of the American president is the:"<<endl<<pet<<endl;
cout<<" The pet of the Ghanaian president is the :"<<endl<<eagle;

}

int main(){
string pet1="Falcon";
string pet2="Eagle";

names(pet1,pet2);
    return 0;
}*/
// using function definition after main() function
// function prototype is declared before main()

#include <iostream>

using namespace std;

// function prototype
int add(int, int);

int main() {
    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(1, 2);


    return 0;
}

// function definition
int add(int a, int b) {
    int sum=0;

cout<<"Enter the terminating value for this program:"<<endl;
    cin>>b;
    for(int i=0;i<=b;i++){
sum+=i;

   }

    cout<<sum;



}

