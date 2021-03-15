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
		memset(arr,  0 , sizeof(arr));
		string s;
		cin>>s;
		//std::transform(s.begin(), s.end(),s.begin(), ::toupper);
		cout<<s<<endl;
        printf("length %lu",s.length());
        int len = s.length();
        int curr_len = 0;
        int maxz = 0;
        int ret = 0;
        int pos = 0;

        for( int i = 0; i < len; i++ ){
        	int curr_char = int(s[ i ]);
        	//printf("  %d",curr_char); cout<<endl;
            int occurred =  arr[ curr_char ];

        	if( occurred ){
        		pos = curr_len - occurred ; // n a b i l i  for i  [curr len ]6  - 4 [position of i]
        		for(int j = 0; j < 129; j++ ){
        			if( arr[ j ] <= occurred ){
        				arr[ j ] = 0;
        			}else{
        				arr[ j ] -= occurred;
        			} 
        		}
            }    
        	
        	arr[curr_char] = ++pos;
  
        	curr_len = pos;
        	maxz = max(maxz,curr_len);
        	
        }

        cout << " RET "<<maxz<<endl;
//wobgrovw

	}
	return 0;
}