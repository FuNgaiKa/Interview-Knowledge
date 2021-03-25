#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
 
void merge(vector<int> &a,int l,int r,int mid)
{
  int i,j,k;//辅助数组 
  vector<int> aux;
  for(k=l;k<=r;k++)
  aux.push_back(a[k]);//把这一部分截下来 
  
  i=l;
  j=mid+1;
  for(k=l;k<=r;k++)
  {
  	if(i>mid)
  	{
  		a[k]=aux[j-l];
  		j++;
	  }
	else if(j>r)
	{
		a[k]=aux[i-l];
		i++;
	  }
	else if(aux[i-l]>aux[j-l])
	{
		a[k]=aux[j-l];
		j++;
	}
	else if(aux[i-l]<=aux[j-l])
	{
		a[k]=aux[i-l];
		i++;
	}
				    
  	
	  }	
	
}
 
void merge_sort(vector<int> &a,int l,int r)
{
    if(l>=r){
    	return;
	}
	
	
	int mid=(l+r)/2;
	
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);
	
	merge(a,l,r,mid);	
	
}

 
int main()
{
	int n,i;
	scanf("%d",&n);
	vector<int> a;
	for(i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		a.push_back(tmp);
	}

	
	merge_sort(a,0,n-1);//调用归并排序代码 
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	
	return 0;
 } 
