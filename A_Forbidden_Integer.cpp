// In the name of Allah
#include <bits/stdc++.h>     // submitted by srk  
using namespace std;

//typedefs
typedef         long long           ll;
typedef         double              dl;
typedef         vector<int>         vin;
typedef         vector<ll>          vll;
typedef         pair<int, int>      pii;
typedef         pair<ll, ll>        pll;
typedef         vector<pll>         vpl;

// Macros
#define         SRK                 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define         nl                  '\n'
#define         tc                  int t; cin>>t; while(t--)
#define         yes                 cout<<"YES"<<nl
#define         no                  cout<<"NO"<<nl
#define         case(x)             cout<<"Case "<<i<<": "<<x<<nl
#define         F                   first
#define         S                   second
#define         pb                  push_back
#define         sz(x)               (int)x.size()
#define         all(x)              x.begin(), x.end()
#define         com                 greater<int>()
#define         input(v)            for (auto& u : v) cin >> u
#define         output(v)           for (const auto& u : v) cout << u << " "
#define         mem(a,b)            memset(a, b, sizeof(a) )
#define         SUM(x)              accumulate(all(x), 0LL)
#define         MAX(x)              *max_element(all(x))
#define         MIN(x)              *min_element(all(x))

//Debugger
#define dbg(args...) do {cerr << #args << " : "; srk(args); } while(0)
void srk(){cerr << endl;}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
template<typename T>void srk(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void srk(T arg,const hello&...rest){cerr<<arg<<' ';srk(rest...);}

//Const
const  int  mod =  1e7+7;
const  int  mx  =  1e4+123;



void solve() {
    
      int n,k,x; cin>>n>>k>>x;
      if(x!=1){
        yes;
        cout<<n<<nl;
        for(int i=1;i<=n;i++){
            cout<<1<<' ';
        }
        cout<<nl;
        return;
      }
      else{
        if(k==1){
            no;
            return;
        }
        else if(k==2 && n%k!=0){
            no;
            return;
        }
        else if(k==2 && n%k==0){
            yes;
            cout<<n/k<<nl;
            for(int i=1;i<=n/k;i++){
                cout<<2<<' ';
            }
            cout<<nl;
            return;
        }
        else if(k>=3){
            if(n&1){
                int y = n/2;
                yes;
                cout<<y<<nl;
                --y;
                for(int i=1;i<=y;i++){
                    cout<<2<<' ';
                }
                cout<<3<<' ';
                cout<<nl;
                return;
            }
            else{
                yes;
                cout<<n/2<<nl;
                for(int i=1;i<=n/2;i++){
                    cout<<2<<' ';
                }
                cout<<nl;
                return;
            }
        }
      }
      no;
    
}

int main() {
    SRK
    tc{
      solve();
    }
    return 0;
}