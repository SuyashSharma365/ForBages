#include<iostream>
using namespace std;

int main(){
    string one, two;
    cin >> one >> two;
    
    // Initialize sum variables to 0
    int sum1 = 0, sum2 = 0;
    int n = one.size();
    
    // Iterate over the strings
    for(int i = 0; i < n; i++){
        // Check lowercase or uppercase for first string
        if (one[i] >= 'a') {
            sum1 += one[i] - 'a';  // Difference from 'a' (lowercase)
        } else {
            sum1 += one[i] - 'A' + 26;  // Difference from 'A' (uppercase)
        }
        
        // Check lowercase or uppercase for second string
        if (two[i] >= 'a') {
            sum2 += two[i] - 'a';  // Difference from 'a' (lowercase)
        } else {
            sum2 += two[i] - 'A' + 26;  // Difference from 'A' (uppercase)
        }
    }

    // Compare the sums and output the result
    if (sum1 == sum2) {
        cout << 0 << endl;  // Strings are equal
    } else if (sum1 > sum2) {
        cout << 1 << endl;  // First string is greater
    } else {
        cout << -1 << endl;  // Second string is greater
    }

    return 0;
}
