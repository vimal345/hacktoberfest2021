#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n,a,b) for(i=a;i<n;i+=b)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
typedef vector<int> vi;
typedef vector<ll> vl;

/* Q = https://leetcode.com/problems/shuffle-the-array/ */

void solution() {
    int n;
    si(n);
    vi A;
    int i=0;
    fo(i,2*n,0,1){
        int x;
        si(x);
        A.push_back(x);
    }
    i=1;
    int t =0;
    fo(i,n,1,2){
        t=A[i+n];
        A[i+n]=A[i];
        A[i]=t;
        t++;
    }
    fo(i,2*n,0,1){
        pi(A[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while(t--) {
        solution();
    }

    return 0;
}
