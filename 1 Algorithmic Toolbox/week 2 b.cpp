///Rashik Hasnat;
///uva, a2oj:Rashik, codeforces, codechef, codemarshal:rashik004;
///git: https://github.com/Rashik004/Coded-algorithms
///LinkedIn:bd.linkedin.com/in/rashikhasnat
///Khulna University of Engineering & Technology (KUET), Khulna
///Bangladesh
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define ll long long
#define ull unisgned long long
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define vi vector<int>
#define MAX 10000+5
#define all(v) v.begin(), v.end()
#define PI acos(-1.0)
#define mem(ara, value) memset(ara, value, sizeof(ara))
#define sf scanf
#define Tcase(t) for(int qq=1;qq<=t; qq++)
using namespace std;



int fib[10000000+2];
int main()
{

    int testCase,x,y,m,l,k,b,c,z,n, res;

    fib[0]=0;
    fib[1]=1;
    cin>>x;
    for(int i=2; i<=x; i++)
        fib[i]=(fib[i-1]%10+fib[i-2]%10)%10;

    cout<<fib[x]<<endl;
    return 0;
}
