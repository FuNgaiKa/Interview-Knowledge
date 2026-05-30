#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<vector>
#include<algorithm> 
using namespace std;
void quicksort(vector<int>& a,int i,int j);
void quicksort(vector<int>& array, int low, int high);
int main(){
	vector<int> a;
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int tmp=0;
		cin>>tmp;
		a.push_back(tmp);
	}
	
	quicksort(a,0,num-1);//开始下标 结束下标 
	for(int i=0;i<num;i++){
		cout<<a[i]<<" ";
	}
}
int quick_sort(vector<int>& a,int i,int j){
	int key=a[i];
	while(i<j){
		while(i<j&&key<=a[j]){
			j--;
		}
		if(i<j){
			a[i]=a[j];
		}
		while(i<j&&key>=a[i]){
			i++;
		}
		if(i<j){
			a[j]=a[i];
		}
	}
	a[i]=key;
	return i;
	
}
void quicksort(vector<int>& array, int low, int high) {
    // 开始默认基准为 low
    if (low < high) {
        // 分段位置下标
        int standard = quick_sort(array, low, high);
        // 递归调用排序
        // 左边排序
        quicksort(array, low, standard - 1);
        // 右边排序
        quicksort(array, standard + 1, high);
    }
}
