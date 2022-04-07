#include <bits/stdc++.h>
using namespace std;

# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))


int binary_search(int A[], int sizeA, int target)
{
	int low = 1, high = sizeA;
	while (low <= high) {
		int mid = low + (high - low)/2;
		if (A[mid] == target)
			return mid;
		else if (A[mid] < target)
			low = mid+1;
		else
			high = mid-1;
	}
	// không tìm thấy giá trị target trong mảng A
	return -1;
}


int main()
{
	int A[] = { 0, 5, 13, 19, 2, 41, 55, 68, 72, 81, 98 };
	int sizeA = my_sizeof(A)/my_sizeof(A[0]);
	// x = 55
	cout << binary_search(A, sizeA, 5);


	
	return 0;
}
