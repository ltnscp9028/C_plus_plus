/*#include<bits/stdc++.h>
using namespace std;
int i,j,n,up,down,k,t;
vector<int>v;
deque<int>dq;
main(){
	cin>>n;
	for(;i++<n;v.push_back(t))scanf("%d",&t);
	cin>>k;
	for(i=0;i<k;i++){
		scanf("%d %d",up,down);
		sort(v.begin(),v.begin()+up);
		sort(v.begin(),v.begin()+down,greater<int>());
	}
	for(i=0;i<n;i++)cout<<v[i]<<" ";
}*/
#include<bits/stdc++.h>
using namespace std;
const int MAX = 100001;
int n, arr[MAX], final_arr[MAX], k, sort_idx;
deque<int>st;
 
int main() {
    //�Է�
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    
    //����ó�� ��� �ֱٿ� ������ ���� ������ ���� �� �߰�
    for (int i = 0; i < k; i++) {
        int asc, desc;
        scanf("%d %d", &asc, &desc);
        sort_idx = max(sort_idx, max(asc, desc));
        while (!st.empty() && abs(st.back()) <= asc) st.pop_back();
        st.push_back(asc);
        while (!st.empty() && abs(st.back()) <= desc) st.pop_back();
        st.push_back(-desc);
    }
    //������ ���� ����
    st.push_back(0);
    //�ִ�������� ����
    sort(arr + 1, arr + sort_idx + 1);
    //�ʱⰪ
    int final_idx = sort_idx;
    int asc_idx = sort_idx;
    int desc_idx = 1;
    //���Ľ���
    int cur = st.front();
    st.pop_front();
    while (!st.empty()) {
        int next = st.front();
        st.pop_front();
        //���̸�ŭ final_arr�� ����
        int len = abs(cur) - abs(next);
        //������������϶�
        if (cur > 0) {
            for (int i = 0; i < len; i++) {
                final_arr[final_idx--] = arr[asc_idx--];
            }
        }
        //�������� ����϶�
        else {
            for (int i = 0; i < len; i++) {
                final_arr[final_idx--] = arr[desc_idx++];
            }
        }
        cur = next;
    }
    //���ο� �迭 ���
    for (int i = 1; i <= sort_idx; i++) {
        printf("%d ", final_arr[i]);
    }
    //��ɿ� ������ �迭 
    for (int i = sort_idx + 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
