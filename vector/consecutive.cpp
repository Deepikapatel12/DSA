//W.A.P to return true if the value of an array are consecutive else return false
//W.A.P to change the first character of each string of a sentence into uppercase
//eg: input A="how much quantity"
// output: A="How Much Quantity"
//W.A.P to return true if second string found in a first string else return false?
//eg1: input: s1="hemant" s2="he"
//output: True
//eg2: input: s1="Honey" s2="nepal"
//output: false
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Consecutive(vector<int>& arr) {
    int n = arr.size();
    if (n < 2)
        return true;
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] != 1) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> arr = {0,1,4,2,5};
    if (Consecutive(arr)) {
    cout << "True"<<"\n";
    } else {
    cout << "False\n";
    }
    return 0;
}
