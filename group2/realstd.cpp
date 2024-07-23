#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int dev(int, int&);

int main() {
    int x;
    int sum = 0;
    int count = 0;
    sum = dev(x, count);
    cout << "The sum of the values amounts to: " << sum << endl;
    if (count > 0) {
        double average = sum / double(count);
        cout << "The average of the values is: " << average << endl;

        // Calculate the sum of squared differences from the mean
        double sum_of_squares = 0;
        for (int i = 1; i <= x; i++) {
            sum_of_squares += pow(i - average, 2);
        }

        // Calculate variance
        double variance = sum_of_squares / count;

        // Calculate standard deviation
        double standard_deviation = sqrt(variance);
        cout << "The standard deviation of the values is: " << standard_deviation << endl;
    } else {
        cout << "No numbers to average." << endl;
    }
    return 0;
}

int dev(int x, int &count) {
    int sum = 0;
    cout << "This program is for finding the average of a set of numbers" << endl;
    cout << "Kindly input the last number:" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        sum += i;
        count++;
    }
    return sum;
}
