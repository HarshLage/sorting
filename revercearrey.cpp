#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int n = arr.size();
	int i = m + 1;
	int j = n - 1;
	while(i<=j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}
