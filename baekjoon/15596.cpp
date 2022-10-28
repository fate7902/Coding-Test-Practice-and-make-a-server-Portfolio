#include <vector>
#include <numeric>
using namespace std;
long long sum(vector<int>& a) {	
	return accumulate(a.begin(), a.end(), 0LL);
}

// accumulate() 함수의 자료형을 주의하자