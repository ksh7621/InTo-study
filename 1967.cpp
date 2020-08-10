//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//vector<pair<int, int>> vt[10001];
//int visited[10001];
//
//int diameter = 0; //���� ���� �� ���
//int far = 0; //�� �� 
//
//
//void dfs(int node, int cost) {
//	
//	visited[node] = true;
//
//	if (diameter < cost) {
//		diameter = cost; //������
//		far = node; //�� ��	
//	}
//
//	for (int i = 0; i < vt[node].size(); i++)
//	{
//		if (!visited[vt[node][i].first])
//
//
//		dfs(vt[node][i].first, cost+vt[node][i].second); //cost �� ���ϸ鼭 ���� �հ� ã��
//
//	}
//}
//
//int main() {
//	
//	int N;
//	cin >> N;
//
//	int parent;
//	int child;
//	int weight;
//	for (int i = 0; i < N-1; i++)
//	{
//		cin >> parent >> child >> weight;
//
//		vt[parent].push_back({ child, weight });
//		vt[child].push_back({ parent, weight });
//	}
//
//	
//	dfs(1, 0); //1���� ��� ���� �ָ� �ִ� ����
//
//	diameter = 0;
//	memset(visited, 0, sizeof(visited)); //����
//	
//
//	dfs(far, 0); //���� �� ������ ���� �� �� �Ÿ�
//
//	cout << diameter << '\n';
//
//
//	return 0;
//}