#include<bits/stdc++.h>
using namespace std;
int shp,t,mhp,lg,sk;main(){
	cin>>shp>>t;
	for(;t--;){
		cin>>lg>>sk;
		shp += (lg==1?-sk:sk);
		mhp = max(mhp,shp);
	}
	cout<<mhp;
	
}

/*
	1. ������
	2. ȸ��
	3. �ִ�����
	
	ex) ���� 10 + �� 3
		 2 20 -> ȸ�� 20 (30)
		 1 10 -> ������ 10 (20)
		 3 40 -> �ִ����� ȸ�� 40 (60) 
*/ 
