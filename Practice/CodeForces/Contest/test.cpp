#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
// #define endl '\n'
// #define fr(i, a, b) for (ll i = a; i < b; i++)
// #define fr1(i, a, b) for (ll i = a; i >= b; i--)
// #define ll long long int
// #define ld long double
// #define vi vector<ll>
// #define vii vector<pair<ll, ll>>
// #define viii vector<pair<ll, pair<ll, ll>>>
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
// #define mp(i, j) make_pair(i, j)
// #define fi first
// #define se second
// #define input(a, n) fr(i, 0, n) cin >> a[i]
// #define output(a, n) fr(i, 0, n) cout << a[i] << " "
// #define dbg cout << "hurr" << endl;
// #define dbg2 cout << "hurr2" << endl;
// #define md 1000000007
// #define inf 999999999999999999
// #define sp << " " <<
// #define pi 3.14159265358979323846
// #define fixd(x) cout << fixed << setprecision(x);
// #define sz size()
bool check(int n){
	int currnum,shortnum=n;
	while(shortnum !=0)
	{
	
		currnum = shortnum%10;
		if (n%currnum==0){
			return false;
		}
		shortnum=shortnum/10;
	}
	return true;
}


 
int main(){
	
	fast;
	 int t;
	 cin>>t;
	while(t--){
		int n;cin>>n;
	if(n==1)
	cout<<-1<<'\n';
	for(int i= pow(10,n-1);i<pow(10,n);i++){
		if(check(i)){
			cout<<i<<'\n';
			break;
		}
	}

		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	return 0;
}