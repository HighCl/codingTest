//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//#define Left(i) ((i<<1) + 1)
//#define Right(i) ((i<<1) + 2)
//#define Parent(i) (i>>1)
//
//void MaxHeapify(vector<int>&, int, int*);
//void BuildMaxHeap(vector<int>&);
//void HeapSort(vector<int>&);
//
//int main(void)
//{
//	vector<int> arr;
//	cout << "Enter 10 values for a heap:\n";
//	for (int i = 0; i < 10; i++)
//	{
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//	HeapSort(arr);
//	cout << "Sorted heap:\n";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << "\n";
//	}
//	return 0;
//}
//
//void MaxHeapify(vector<int>& arr, int i, int* HS)
//{
//	int l = Left(i);
//	int r = Right(i);
//	int HeapSize = *HS;
//	int max;
//	if (l < HeapSize && arr[l] > arr[i])
//	{
//		max = l;
//	}
//	else
//	{
//		max = i;
//	}
//	if (r < HeapSize && arr[r] > arr[max])
//	{
//		max = r;
//	}
//	if (max != i)
//	{
//		arr[i] = arr[i] ^ arr[max];
//		arr[max] = arr[i] ^ arr[max];
//		arr[i] = arr[i] ^ arr[max];
//		MaxHeapify(arr, max, HS);
//	}
//}
//
//void BuildMaxHeap(vector<int>& arr)
//{
//	int HeapSize = arr.size();
//	for (int i = (arr.size() - 1) / 2; i >= 0; i--)
//	{
//		MaxHeapify(arr, i, &HeapSize);
//	}
//}
//
//void HeapSort(vector<int>& arr)
//{
//	BuildMaxHeap(arr);
//	int HeapSize = arr.size();
//	for (int i = arr.size() - 1; i >= 1; i--)
//	{
//		arr[0] = arr[0] ^ arr[i];
//		arr[i] = arr[0] ^ arr[i];
//		arr[0] = arr[0] ^ arr[i];
//		HeapSize--;
//		MaxHeapify(arr, 0, &HeapSize);
//	}
//}