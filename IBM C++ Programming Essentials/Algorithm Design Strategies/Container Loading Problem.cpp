#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }
    
    int W;
    cin >> W;
    
    int currentWeight = 0;
    int count = 0;
    vector<int> solution(n, 0);
    
    for (int i = 0; i < n; ++i) {
        if (currentWeight + weights[i] <= W) {
            currentWeight += weights[i];
            solution[i] = 1;
            count++;
        } else {
            solution[i] = 0;
        }
    }
    
    cout << count << endl;
    cout << "[";
    for (int i = 0; i < n; ++i) {
        cout << solution[i];
        if (i < n - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    
    return 0;
}
