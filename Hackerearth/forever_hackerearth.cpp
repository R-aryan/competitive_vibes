#include <bits/stdc++.h>
using namespace std;
 
 
 
#define DB(a) cerr << __LINE__ << ": " << #a << " = " << (a) << endl
#define dbg(A,sz) for(int i = 0; i < sz; ++i) cerr << A[i] << " "; cerr << "\n"
#define pause() cin.get();cin.get()
typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;
 
const int MAX = 212345;
int Len[2][MAX], L[2], R[2], N, M;
 
string str;
vector<PII> Even[MAX], Odd[MAX];
int ans[MAX];
 
void Build(){
 memset(L, 0, sizeof(L));
 memset(R, -1, sizeof(R));
 
 for (int i = 0; i < N; ++i) for (int p = 0; p < 2; ++p){
  int dR = R[p] - i;
  int k = (i < R[p] ? min(dR + !p, Len[p][L[p] + dR + !p]) : 0) + 1;
 
  while (i + k - !p < N and i - k >= 0 and str[i + k - !p] == str[i - k]) ++k;
  Len[p][i] = --k;
  if (i + k - !p > R[p])
   R[p] = i + k - !p, L[p] = i - k;
 }
}
 
int tree[2][MAX];
void update(int idx, int val, int x){
 assert(idx > 0);
 assert(idx < MAX);
 for (; idx < MAX; idx += idx & -idx) tree[x][idx] += val;
}
 
int query(int idx, int x){
 int sum = 0;
 for (; idx > 0; idx -= idx & -idx) sum += tree[x][idx];
 return sum;
}
 
void solve(){
 cin >> str;
 N = (int)str.size();
 Build();
 
 memset(ans, 0, sizeof(ans));
 memset(tree, 0, sizeof(tree));
 
 cin >> M;
 assert(N < MAX);
 assert(M < MAX);
 
 for (int i = 0; i < M; ++i){
  int st, len, mid;
  cin >> st >> len;
  ans[i] += (len == 0 and st < N);
  len = max(len, 1);
  mid = len / 2;
 
  if (st + mid < N) Odd[st + mid].push_back(make_pair(st, i));
  if ((st + mid + (len & 1)) < N) Even[st + mid + (len & 1)].push_back(make_pair(st, i));
 }
 
 for (int i = N - 1; i >= 0; --i){
  //cerr << "Running for " << i << endl;
  for (int p = 0; p < 2; ++p){
   int x = i - Len[p][i];
   if (Len[p][i] == 0 and p == 0) continue;
   update(x + 1, 1, p);
   //cerr << "updating " << x << " " << p  << " " << Len[p][i] << endl;
  }
 
  int sz = Even[i].size();
  for (int j = 0; j < sz; ++j){
   int st = Even[i][j].first, index = Even[i][j].second;
   int res = query(st + 1, 0);
   ans[index] += res;
   //cerr << "Even query for " << st << " " << index << " res is " << res << endl;
  }
 
  sz = Odd[i].size();
  for (int j = 0; j < sz; ++j){
   int st = Odd[i][j].first, index = Odd[i][j].second;
   int res = query(st + 1, 1);
   ans[index] += res;
   //cerr << "Odd query for " << st << " " << index << " res is " << res << endl;
  }
 }
 
 for (int i = 0; i < M; ++i)
  cout << ans[i] << endl;
}
 
int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(NULL);
 solve();
 return 0;
}
//Language: C++
