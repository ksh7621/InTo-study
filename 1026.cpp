//1026
#include <iostream>
#include <algorithm>
using namespace std;

int main_1026() {
	int N;
	cin >> N;

	int A[50] = {0,};
	int B[50] = {0,};
	int S[50] = {0,};
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];	
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A, A + N); //��������

	int sum = 0;


	//�����ϰ� �ִ밪 * ó����

	for (int i = 0; i < N; i++) {
		int temp = 0;
		int idx = 0;
		for (int i = 0; i < N; i++) {
			if (temp < B[i] && S[i] == 0) { //��ĭ�� �ֱ� ����
				temp = B[i]; //max
				idx = i; //index
			
			}		
		}
		S[idx] = 1;
		sum += A[i] * temp;
	}
	cout << sum;
	return 0;
}