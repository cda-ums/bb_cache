#include "cache.h"
int main()
{
	CachePolicyMap<int, int, std::less<int> > mypolicy;
	ums::cache <int, int, mypolicy> mycache;
	return 0;
}
//This line was added after the fist commit in exp branc to master branch
