#include <iostream>
#include <string>

using namespace std;



template <typename T>
T max(T* arr, int size) {
	T ans = arr[0];
	for (int b = 1; b < size; b++) {
		if (arr[b] > ans) ans = arr[b];
	}
	return ans;
}

template <typename T>
T min(T* arr, int size) {
	T ans = arr[0];
	for (int b = 1; b < size; b++) {
		if (arr[b] < ans) ans = arr[b];
	}
	return ans;
}

template <typename T>
void swit(T* arr, T elem, int i) {
	arr[i] = elem;
}

template <typename T>
void quickSort(T* arr, int start, int fin) {
	if (start < fin) {
		T pv = arr[fin];
		int i = start;
		int j = start;
		while (i <= fin) {
			if (arr[i] > pv) {
				i++;
			}
			else {
				swap(arr[i], arr[j]);
				i++;
				j++;
			}
		}
		int mk = j - 1;
		quickSort(arr, start, mk - 1);
		quickSort(arr, mk + 1, fin);
	}
}

int main()
{

}
