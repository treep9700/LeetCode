#include <iostream>
#include <cmath>
using namespace std;
int countPrimes(int n) {
	int count = 0;
	if(n == 1)
		return 0;
	for(int i = 2; i < n; i++ ){    // ��2�� n ����
		int m = sqrt(i);
		for(int j = 2; j <= m; j++){     //�ж�һ�����Ƿ�Ϊ����   j<m ����������Ϥforѭ����ִ��˳�� 
			 if(i%j == 0){             
				count++;               //�������� count ������һ 
				break; 
			}	
		}
	}
	return n-2-count;		   // ������ȥ���������� 
}
int main(){
	int a;
	a = countPrimes(10);
	cout << a;
	return 0;
	
} 
