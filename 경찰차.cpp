#include<bits/stdc++.h>
using namespace std;

int n, m, dp[1123][1123], choose[1123][1123];
pair<int,int> pos[1123];

//��ǥ a�� b�� �ִ� �Ÿ�
inline int dist(auto &a, auto &b){
	return abs(a.first - b.first) + abs(a.second - b.second);
}

//�������� ��ġ�� ���� pos[x], pos[y]�� ��, ���� ���º��� ���� �� �ּ� �Ÿ��� ��
int solve(int x, int y){
	//pos[here]�� �ذ��ؾ� �Ѵ�.
	int here = max(x,y)+1; 
	if(here == m+2) return 0;

	int &ret = dp[x][y];
	if(ret != -1) return ret;

	//x�� �̹� ����� �ذ��Ѵ�.
	ret = solve(here, y) + dist(pos[x], pos[here]);

	//y�� �̹� ����� �ذ��ϴ°� �̵��� ���
	int ygo = solve(x, here) + dist(pos[y], pos[here]);
	if(ygo < ret){
		ret = ygo;
		choose[x][y] = 1;
	}

	return ret;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for(int i=2; i<=m+2; ++i)
		cin >> pos[i].first >> pos[i].second;
	pos[0] = {1,1};
	pos[1] = {n,n};
	memset(dp, -1, sizeof(dp));
	cout << solve(0, 1) << '\n';

	for(int x = 0, y = 1; max(x,y)+1 < m+2; ){
		cout << choose[x][y]+1 << '\n';
		//choose[x][y] = 1�� ��� y�� ����� �ذ�
		if(choose[x][y]) y = max(x,y)+1;
		else x = max(x,y)+1;
	}
}
