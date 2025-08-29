#include<bits/stdc++.h>
using namespace std;

vector<int> euiler_totient(int n) {
    vector<int> totient(n + 1);
    for (int i = 0; i <= n; i++)
        totient[i] = i;

    for (int i = 2; i <= n; i++) {
        if (totient[i] == i) {
            for (int j = i; j <= n; j += i)
                totient[j] -= totient[j] / i;
        }
    }

    return totient;
}

int main(){
    int n;
    cin >> n;

    vector<int> totient = euiler_totient(n);
    for(int i=0;i<=n;i++){
        cout << totient[i] << " ";
    }
    cout << endl;
}