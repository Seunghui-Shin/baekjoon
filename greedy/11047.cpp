#include <iostream>
using namespace std;
#define max_n 10
int arr[max_n];
int n, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = n - 1;i >= 0;i--) {
        cnt += k / arr[i];
        k %= arr[i];
    }
    cout << cnt;
}
