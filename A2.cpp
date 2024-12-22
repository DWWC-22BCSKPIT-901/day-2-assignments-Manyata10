#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result(numRows);
    for (int i = 0; i < numRows; ++i) {
        result[i].resize(i + 1, 1); // Initialize row with 1s
        for (int j = 1; j < i; ++j) 
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
    }
    return result;
}

int main() {
    int numRows = 5;
    auto pascal = generate(numRows);
    cout << "[\n";
    for (const auto& row : pascal) {
        cout << " [";
        for (int i = 0; i < row.size(); ++i) 
            cout << row[i] << (i < row.size() - 1 ? "," : "");
        cout << "]\n";
    }
    cout << "]\n";
    return 0;
}
