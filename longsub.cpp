#pragma warning (disable: 4786)
#pragma comment (linker, "/STACK:26777216")

#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>

//#include <bits/stdc++.h>

using namespace std;
typedef long long lint;
typedef unsigned long long ulint;
#define NN 100004
#define MM 1000002
#define CLR( a ) memset( a , 0 , sizeof ( a ) )
#define negCLR( a ) memset( a , -1 , sizeof( a ) )
#define lld I64d
#define FOR(i,s,t) for(int i = (s); i <= (t); i++)
#define ROF(i,t,s) for(int i = (t); i >= (s); i--)
const lint MOD =  1000000007;
const lint LINF = 1000000097999999903LL;
lint boundz = 10000000001;
const int INF = (1 << 29);
struct vert{ int val, id; vert(){} vert( int a, int b ){ val = a; id = b; } };
const bool cmp( const vert &a, const vert &b ){ return a.val < b.val; }
int N, P, Q, maxLen, caseno;

int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		printf("HELLO %d\n",cases);
	}
	return 0;
}