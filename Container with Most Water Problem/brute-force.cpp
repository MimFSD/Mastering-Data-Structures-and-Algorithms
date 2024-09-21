#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int maxAreaBruteForce(vector<int>& height) {
    int n = height.size();
    int max_area = 0;

    // Check all pairs (i, j) where i < j
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Calculate the area between lines at i and j
            int current_area = min(height[i], height[j]) * (j - i);
            
            // Update the maximum area found
            max_area = max(max_area, current_area);
        }
    }

    return max_area;
}

int main() {
    // Example usage
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The maximum area of water the container can store (Brute Force) is: " << maxAreaBruteForce(height) << endl;

    return 0;
}
