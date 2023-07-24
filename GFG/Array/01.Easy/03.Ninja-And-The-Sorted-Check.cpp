// Ninja And The Sorted Check

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0; i<n-1; i++) {
        if(a[i+1] < a[i]) {
            return 0;
        }
    }
    return 1;
}

// T : O(N)
// S : O(1)
