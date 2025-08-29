#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> getPrimeFactors(int n){
    map<int,int> mp;

    while(n % 2 == 0){
        mp[2]++;
        n /= 2;
    }

    for (int i=3; i*i <= n; i+=2){
        while(n % i == 0){
            mp[i]++;
            n /= i;
        }
    }

    if(n > 1) mp[n]++;

    vector<pair<int, int>> primefactors;
    for(auto it : mp){
        primefactors.push_back({it.first, it.second});
    }

    return primefactors;
}

int countDivisors(int n){
    vector<pair<int, int>> div = getPrimeFactors(n);
    int ans = 1;

    for(auto it : div){
        ans *= (it.second + 1);
    }

    return ans;
}

vector<int> getDivisors(int n){
    vector<int> divs;

    for(int i=1;i*i <= n;i++){
        if(n%i == 0){
            divs.push_back(i);

            if(n/i != i) divs.push_back(n/i);
        }
    }

    sort(divs.begin(), divs.end());
    return divs;
}

int main(){

}