#pragma once

template<typename T>
void qsort(T lst[], int head, int tail) {
	if (head >= tail) return;

	int i = head, j = tail;

	T pivot = lst[head];

	while (i < j)
	{
		while (i < j and lst[j] >= pivot) j--;
		lst[i] = lst[j];
		while (i < j and lst[i] <= pivot) i++;
		lst[j] = lst[i];
	}

	lst[i] = pivot;

	qsort(lst, head, i - 1);
	qsort(lst, j + 1, tail);
}