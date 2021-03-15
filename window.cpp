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
int arr[129];

int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
	string s, t;
    cin>>s>>t;
    int arr[129];
    memset(arr, 0, sizeof(arr));
    int tlen = t.length();
    for( int i = 0; i < tlen; i++ ) {
        arr[ int(t[ i ]) ]++;
    }

    int slen = s.length();

    int st = 0, en = 0;
    int ret = 1<<21;
    int total_hit = tlen;
    int ret_st = 0;

    while( en < slen ){
        //moving right cursor
        arr[ int( s[en] )]--;
       if( arr[ int(s[en]) ] >= 0 ){
          total_hit--;
       }//else non target char, there is optimization to filter out, preprocess
       en++;

       while(!total_hit){ //covered all target char
           if(ret > (en-st)){
              ret = (en-st);
              ret_st = st;
           }
           //moving left cursor
           arr[ int(s[ st ]) ]++;
           if( arr[ int(s[st] ) ] > 0 ) {
             total_hit++; //adjust cause hit target char
             
           }
           st++;

       }
       string ans = "";
       if(ret != (1<<21) ){
          for(int i = 0 ; i < ret; i++ ){
            ans += s[ret_st++];
          }
       }
       cout<<" RESULT "<<ans<<endl;

    }

 

	}
	return 0;
}