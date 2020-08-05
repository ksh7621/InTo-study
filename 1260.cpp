//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//vector<vector<int>>vt(1001);
//int visit[1001];
//
//
//void dfs(int now);
//void bfs(int now);
//
//int main() {
//	int N,M,V;
//	cin >> N >> M >> V; //���� ���� ���۹�ȣ
//
//
//	int x, y; //��������
//
//	for (int i = 0; i < M; i++) {
//		cin >> x >> y;
//
//		vt[x].push_back(y); //������
//		vt[y].push_back(x);
//	}
//	
//	for (int i = 1; i <= N; i++) {
//		sort(vt[i].begin(), vt[i].end());	//������� sort	
//	}
//
//	dfs(V);
//	
//	memset(visit, 0, sizeof(visit)); //�ٽ� �ʱ�ȭ
//	cout << endl;
//	bfs(V);
//
//	return 0;
//}
//
//void dfs(int now) {
//	cout << now << " ";
//	visit[now] = true;
//
//	for (int i = 0; i < vt[now].size(); i++) {
//		if (visit[vt[now][i]] != 1) {
//			dfs(vt[now][i]);
//		}
//	}
//
//}
//
//void bfs(int now) {
//	queue<int>qu;	
//	qu.push(now);	
//	visit[now] = true;	
//	
//	while (!qu.empty()) { //���� ���� �� ����
//		int here = qu.front();
//		qu.pop();
//		cout << here << " ";
//
//
//		for (int i = 0; i < vt[here].size(); i++) {			
//
//			if (!visit[vt[here][i]]) {
//				qu.push(vt[here][i]);
//				visit[vt[here][i]] = true;
//				
//			}
//		}
//	}
//}
