#include "interactor.h"

inline int solve(int i) {
	int l = 0, r = 1000000;
	while (l < r) {
		int mid = l + (r - l) / 2;
		if (guess(i, mid) >= 0) r = mid;
		else l = mid + 1;
	}
	return l;
}

std::vector<int> get_ans(int n)
{
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		a[i] = solve(i);
	}
	for(int i = 1; i <= 1000; ++i)
		guess(0, 0);
	return a;
}
