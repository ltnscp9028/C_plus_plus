#include <bits/stdc++.h>
using namespace std;
int b[10],a;main(){
	a=scanf("%d %d",b,b+1);
	cout<<a<<endl;
}


//����Լ� ��� 
/*#include <cstdio>
#include <vector>
using namespace std;
 
vector<int> dp;
 
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    // �̹� ���� ����� ���� �ִٸ� �� ���� �ٷ� ����
    if(dp[n] != -1) return dp[n];
    // �ƴ϶�� ����ؼ� dp ����Ʈ�� �־� ����
    dp[n] = fibonacci(n-2) + fibonacci(n-1);
    return dp[n];
}
 
int main(){
    int N;
    scanf("%d", &N);
    dp.resize(N+1, -1); // �ʱⰪ -1�� fibonacci ����� ���� ���� �� ���� ��
    printf("%d\n", fibonacci(N));
}*/

//�ݺ��� ���
/*#include <cstdio>
#include <vector>
using namespace std;
 
int main(){
    int N;
    scanf("%d", &N);
    vector<int> dp(N+1, 0);
    dp[1] = 1;
    for(int i=2; i<=N; i++)
        dp[i] = dp[i-1] + dp[i-2];
    printf("%d\n", dp[N]);
} 

*/



