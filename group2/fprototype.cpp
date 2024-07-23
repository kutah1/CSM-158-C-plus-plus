#include <iostream>
using namespace std;

int dev(int);

int main() {
    int x = 10;
    int sum = dev(x);
    cout << "The sum of the values amounts to: " << sum << endl;
    if (x > 0) {
        double average = sum / double(x);
        cout << "The average of the values is: " << average << endl;
    } else {
        cout << "No numbers to average." << endl;
    }
    return 0;
}

int dev(int x) {
    int sum = 0;
    cout << "This program is for finding the average of a set of numbers" << endl;
    cout << "Kindly input the last number:" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        sum += i;
    }
    return sum;
}
